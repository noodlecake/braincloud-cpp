pipeline {
    agent none
    stages {

        stage('Tests on Mac') {
            agent {
                label 'clientUnit'
            }
            blockOn("bitHeads_BrainCloud_Client_UnitTest_.*_internal", {
             blockLevel("GLOBAL")
             scanQueueFor("DISABLED")
            })
            environment {
			    PATH = "/Applications/CMake.app/Contents/bin:/usr/local/bin:${env.PATH}"
  			}
            steps {
            	echo "Mac..."
                cleanWs()
				sh 'cp ~/bin/test_ids_internal.txt autobuild/ids.txt'
				sh 'autobuild/runtests.sh ${TEST_NAME}'
            }
            post {
	      		always {
    	    		junit testResults: 'build/tests/results.xml', skipPublishingChecks: true
      			}
  			}	 
        }
        
        stage('Tests on Linux') {
            agent { 
                label '"Linux Build Agent (.41)"'
            }
            environment {
			    PATH = "/usr/bin:${env.PATH}"
  			}
  			steps { 
            	echo 'Linux...'
                cleanWs()
				sh 'cp ~/bin/test_ids_internal.txt autobuild/ids.txt'
				sh 'bash autobuild/runtests.sh ${TEST_NAME}'
            }
            post {
	      		always {
    	    		junit testResults: 'build/tests/results.xml', skipPublishingChecks: true
      			}
  			}	 
        }
        
         stage('Tests on Windows') {
            agent {
                label 'Windows Build Agent (.34)'
            }
            steps {
            	echo "Windows..."
                cleanWs()
            	bat 'copy /Y C:\\Users\\buildmaster\\bin\\test_ids_internal.txt autobuild\\ids.txt'
            	bat 'autobuild\\runtests.bat %TEST_NAME%'
            }
            post {
	      		always {
    	    		junit testResults: 'build/tests/results.xml', skipPublishingChecks: true
      			}
  			}	 
        }
        
        stage('Package on Mac') {
            agent {
                label 'clientUnit'
            }
            environment {
			    PATH = "/Applications/CMake.app/Contents/bin:/usr/local/bin:${env.PATH}"
  			}
            steps {
                        cleanWs()
        				sh 'autobuild/build_apple_unified.sh'
        	}
        	post{
        	    always{
        	        archiveArtifacts artifacts: 'artifacts/*.zip', fingerprint: true
        	       }
        	}
        }
                
        stage('Package for Linux') {
            agent { 
                label '"Linux Build Agent (.41)"'
            }
            environment {
			    PATH = "/usr/bin:${env.PATH}"
  			}
            steps {
                        cleanWs()
        				sh 'autobuild/build_linux.sh i386'
        	}
        	post{
        	    always{
        	        archiveArtifacts artifacts: 'artifacts/*.zip', fingerprint: true
        	       }
        	}
        }
        // end stages
    }
    // end pipeline
}