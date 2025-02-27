#ifndef _REASONCODES_H_
#define _REASONCODES_H_

static const int NO_REASON_CODE = 0;
static const int INVALID_NOTIFICATION = 20200;
static const int INVALID_REQUEST = 40001;
static const int SWITCHING_FACEBOOK_MEMORY = 40201;
static const int MERGING_MEMORY = 40202;
static const int RESETING_MEMORY = 40203;
static const int RECREATING_ANONYMOUS_MEMORY = 40203;
static const int MOVING_ANONYMOUS_MEMORY = 40204;
static const int LOGIN_SECURITY_ERROR = 40205;
static const int MISSING_IDENTITY_ERROR = 40206;
static const int SWITCHING_PROFILES = 40207;
static const int MISSING_PROFILE_ERROR = 40208;
static const int SECURITY_ERROR = 40209;
static const int DOWNGRADING_TO_ANONYMOUS_ERROR = 40210;
static const int DUPLICATE_IDENTITY_TYPE = 40211;
static const int MERGE_PROFILES = 40212;
static const int INVALID_PROPERTY_NAME = 40213;
static const int EMAIL_NOT_VALIDATED = 40214;
static const int DATABASE_ERROR = 40215;
static const int PROPERTY_NOT_OVERRIDEABLE = 40216;
static const int UNKNOWN_AUTH_ERROR = 40217;
static const int DATABASE_INPUT_TOO_LARGE_ERROR = 40218;
static const int MISSING_APP_EMAIL_ACCOUNT = 40219;
static const int DATABASE_DUP_KEY_ERROR = 40220;
static const int EMAIL_NOT_VALID = 40221;
static const int UNABLE_TO_GET_FRIENDS_FROM_FACEBOOK = 40300;
static const int BAD_SIGNATURE = 40301;
static const int UNABLE_TO_VALIDATE_PLAYER = 40302;
static const int PLAYER_SESSION_EXPIRED = 40303;
static const int NO_SESSION = 40304;
static const int PLAYER_SESSION_MISMATCH = 40305;
static const int OPERATION_REQUIRES_A_SESSION = 40306;
static const int TOKEN_DOES_NOT_MATCH_USER = 40307;
static const int MANUAL_REDIRECT = 40308;
static const int EVENT_CAN_ONLY_SEND_TO_FRIEND_OR_SELF = 40309;
static const int NOT_FRIENDS = 40310;
static const int VC_BALANCE_CANNOT_BE_SPECIFIED = 40311;
static const int VC_LIMIT_EXCEEDED = 40312;
static const int UNABLE_TO_GET_MY_DATA_FROM_FACEBOOK = 40313;
static const int TLS_VERSION_INVALID = 40314;
static const int INVALID_AUTHENTICATION_TYPE = 40315;
static const int INVALID_GAME_ID = 40316;
static const int APPLE_TRANS_ID_ALREADY_CLAIMED = 40317;
static const int CLIENT_VERSION_NOT_SUPPORTED = 40318;
static const int BRAINCLOUD_VERSION_NOT_SUPPORTED = 40319;
static const int PLATFORM_NOT_SUPPORTED = 40320;
static const int INVALID_PLAYER_STATISTICS_EVENT_NAME = 40321;
static const int GAME_VERSION_NOT_SUPPORTED = 40322;
static const int BAD_REFERENCE_DATA = 40324;
static const int MISSING_OAUTH_TOKEN = 40325;
static const int MISSING_OAUTH_VERIFIER = 40326;
static const int MISSING_OAUTH_TOKEN_SECRET = 40327;
static const int MISSING_TWEET = 40328;
static const int FACEBOOK_PAYMENT_ID_ALREADY_PROCESSED = 40329;
static const int DISABLED_GAME = 40330;
static const int MATCH_MAKING_DISABLED = 40331;
static const int UPDATE_FAILED = 40332;
static const int INVALID_OPERATION = 40333;
static const int MATCH_RANGE_ERROR = 40334;
static const int PLAYER_IN_MATCH = 40335;
static const int MATCH_PLAYER_SHIELDED = 40336;
static const int MATCH_PLAYER_MISSING = 40337;
static const int MATCH_PLAYER_LOGGED_IN = 40338;
static const int INVALID_ITEM_ID = 40339;
static const int MISSING_PRICE = 40340;
static const int MISSING_USER_INFO = 40341;
static const int MISSING_STEAM_RESPONSE = 40342;
static const int MISSING_STEAM_TRANSACTION = 40343;
static const int ENTITY_VERSION_MISMATCH = 40344;
static const int MISSING_RECORD = 40345;
static const int INSUFFICIENT_PERMISSIONS = 40346;
static const int MISSING_IN_QUERY = 40347;
static const int INVALID_DATABASE_FIELD_NAME = 40347;
static const int RECORD_EXPIRED = 40348;
static const int INVALID_WHERE = 40349;
static const int S3_ERROR = 40350;
static const int INVALID_ATTRIBUTES = 40351;
static const int IMPORT_MISSING_GAME_DATA = 40352;
static const int IMPORT_SCHEMA_VERSION_TOO_OLD = 40353;
static const int IMPORT_SCHEMA_VERSION_INVALID = 40355;
static const int PLAYER_SESSION_LOGGED_OUT = 40356;
static const int API_HOOK_SCRIPT_ERROR = 40357;
static const int MISSING_REQUIRED_PARAMETER = 40358;
static const int INVALID_PARAMETER_TYPE = 40359;
static const int INVALID_IDENTITY_TYPE = 40360;
static const int EMAIL_SEND_ERROR = 40361;
static const int CHILD_ENTITY_PARTIAL_UPDATE_INVALID_DATA = 40362;
static const int MISSING_SCRIPT = 40363;
static const int SCRIPT_SECURITY_ERROR = 40364;
static const int SERVER_SESSION_EXPIRED = 40365;
static const int STREAM_DOES_NOT_EXIT = 40366;
static const int STREAM_ACCESS_ERROR = 40367;
static const int STREAM_COMPLETE = 40368;
static const int INVALID_STATISTIC_NAME = 40369;
static const int INVALID_HTTP_REQUEST = 40370;
static const int GAME_LIMIT_REACHED = 40371;
static const int GAME_RUNSTATE_DISABLED = 40372;
static const int INVALID_COMPANY_ID = 40373;
static const int INVALID_PLAYER_ID = 40374;
static const int INVALID_TEMPLATE_ID = 40375;
static const int MINIMUM_SEARCH_INPUT = 40376;
static const int MISSING_GAME_PARENT = 40377;
static const int GAME_PARENT_MISMATCH = 40378;
static const int CHILD_PLAYER_MISSING = 40379;
static const int MISSING_PLAYER_PARENT = 40380;
static const int PLAYER_PARENT_MISMATCH = 40381;
static const int MISSING_PLAYER_ID = 40382;
static const int DECODE_CONTEXT = 40383;
static const int INVALID_QUERY_CONTEXT = 40384;
static const int INVALID_AMOUNT = 40385;
static const int GROUP_MEMBER_NOT_FOUND = 40385;
static const int INVALID_SORT = 40386;
static const int GAME_NOT_FOUND = 40387;
static const int GAMES_NOT_IN_SAME_COMPANY = 40388;
static const int IMPORT_NO_PARENT_ASSIGNED = 40389;
static const int IMPORT_PARENT_CURRENCIES_MISMATCH = 40390;
static const int INVALID_SUBSTITUION_ENTRY = 40391;
static const int INVALID_TEMPLATE_STRING = 40392;
static const int TEMPLATE_SUBSTITUTION_ERROR = 40393;
static const int INVALID_OPPONENTS = 40394;
static const int REDEMPTION_CODE_NOT_FOUND = 40395;
static const int REDEMPTION_CODE_VERSION_MISMATCH = 40396;
static const int REDEMPTION_CODE_ACTIVE = 40397;
static const int REDEMPTION_CODE_NOT_ACTIVE = 40398;
static const int REDEMPTION_CODE_TYPE_NOT_FOUND = 40399;
static const int REDEMPTION_CODE_INVALID = 40400;
static const int REDEMPTION_CODE_REDEEMED = 40401;
static const int REDEMPTION_CODE_REDEEMED_BY_SELF = 40402;
static const int REDEMPTION_CODE_REDEEMED_BY_OTHER = 40403;
static const int SCRIPT_EMPTY = 40404;
static const int ITUNES_COMMUNICATION_ERROR = 40405;
static const int ITUNES_NO_RESPONSE = 40406;
static const int ITUNES_RESPONSE_NOT_OK = 40407;
static const int JSON_PARSING_ERROR = 40408;
static const int ITUNES_NULL_RESPONSE = 40409;
static const int ITUNES_RESPONSE_WITH_NULL_STATUS = 40410;
static const int ITUNES_STATUS_BAD_JSON_RECEIPT = 40411;
static const int ITUNES_STATUS_BAD_RECEIPT = 40412;
static const int ITUNES_STATUS_RECEIPT_NOT_AUTHENTICATED = 40413;
static const int ITUNES_STATUS_BAD_SHARED_SECRET = 40414;
static const int ITUNES_STATUS_RECEIPT_SERVER_UNAVAILABLE = 40415;
static const int ITUNES_RECEIPT_MISSING_ITUNES_PRODUCT_ID = 40416;
static const int PRODUCT_NOT_FOUND_FOR_ITUNES_PRODUCT_ID = 40417;
static const int DATA_STREAM_EVENTS_NOT_ENABLED = 40418;
static const int INVALID_DEVICE_TOKEN = 40419;
static const int ERROR_DELETING_DEVICE_TOKEN = 40420;
static const int WEBPURIFY_NOT_CONFIGURED = 40421;
static const int WEBPURIFY_EXCEPTION = 40422;
static const int WEBPURIFY_FAILURE = 40423;
static const int WEBPURIFY_NOT_ENABLED = 40424;
static const int NAME_CONTAINS_PROFANITY = 40425;
static const int NULL_SESSION = 40426;
static const int PURCHASE_ALREADY_VERIFIED = 40427;
static const int GOOGLE_IAP_NOT_CONFIGURED = 40428;
static const int UPLOAD_FILE_TOO_LARGE = 40429;
static const int FILE_ALREADY_EXISTS = 40430;
static const int CLOUD_STORAGE_SERVICE_ERROR = 40431;
static const int FILE_DOES_NOT_EXIST = 40432;
static const int UPLOAD_ID_MISSING = 40433;
static const int UPLOAD_JOB_MISSING = 40434;
static const int UPLOAD_JOB_EXPIRED = 40435;
static const int UPLOADER_EXCEPTION = 40436;
static const int UPLOADER_FILESIZE_MISMATCH = 40437;
static const int PUSH_NOTIFICATIONS_NOT_CONFIGURED = 40438;
static const int MATCHMAKING_FILTER_SCRIPT_FAILURE = 40439;
static const int ACCOUNT_ALREADY_EXISTS = 40440;
static const int PROFILE_ALREADY_EXISTS = 40441;
static const int MISSING_NOTIFICATION_BODY = 40442;
static const int INVALID_SERVICE_CODE = 40443;
static const int IP_ADDRESS_BLOCKED = 40444;
static const int UNAPPROVED_SERVICE_CODE = 40445;
static const int PROFILE_NOT_FOUND = 40446;
static const int ENTITY_NOT_SHARED = 40447;
static const int SELF_FRIEND = 40448;
static const int PARSE_NOT_CONFIGURED = 40449;
static const int PARSE_NOT_ENABLED = 40450;
static const int PARSE_REQUEST_ERROR = 40451;
static const int GROUP_CANNOT_ADD_OWNER = 40452;
static const int NOT_GROUP_MEMBER = 40453;
static const int INVALID_GROUP_ROLE = 40454;
static const int GROUP_OWNER_DELETE = 40455;
static const int NOT_INVITED_GROUP_MEMBER = 40456;
static const int GROUP_IS_FULL = 40457;
static const int GROUP_OWNER_CANNOT_LEAVE = 40458;
static const int INVALID_INCREMENT_VALUE = 40459;
static const int GROUP_VERSION_MISMATCH = 40460;
static const int GROUP_ENTITY_VERSION_MISMATCH = 40461;
static const int INVALID_GROUP_ID = 40462;
static const int INVALID_FIELD_NAME = 40463;
static const int UNSUPPORTED_AUTH_TYPE = 40464;
static const int CLOUDCODE_JOB_NOT_FOUND = 40465;
static const int CLOUDCODE_JOB_NOT_SCHEDULED = 40466;
static const int GROUP_TYPE_NOT_FOUND = 40467;
static const int MATCHING_GROUPS_NOT_FOUND = 40468;
static const int GENERATE_CDN_URL_ERROR = 40469;
static const int INVALID_PROFILE_IDS = 40470;
static const int MAX_PROFILE_IDS_EXCEEDED = 40471;
static const int PROFILE_ID_MISMATCH = 40472;
static const int LEADERBOARD_DOESNOT_EXIST = 40473;
static const int APP_LICENSING_EXCEEDED = 40474;
static const int SENDGRID_NOT_INSTALLED = 40475;
static const int SENDGRID_EMAIL_SEND_ERROR = 40476;
static const int SENDGRID_NOT_ENABLED_FOR_APP = 40477;
static const int SENDGRID_GET_TEMPLATES_ERROR = 40478;
static const int SENDGRID_INVALID_API_KEY = 40479;
static const int EMAIL_SERVICE_NOT_CONFIGURED = 40480;
static const int INVALID_EMAIL_TEMPLATE_TYPE = 40481;
static const int SENDGRID_KEY_EMPTY_OR_NULL = 40482;
static const int BODY_TEMPLATE_CANNOT_COEXIST = 40483;
static const int SUBSTITUTION_BODY_CANNOT_COEXIST = 40484;
static const int INVALID_FROM_ADDRESS = 40485;
static const int INVALID_FROM_NAME = 40486;
static const int INVALID_REPLY_TO_ADDRESS = 40487;
static const int INVALID_REPLY_TO_NAME = 40488;
static const int FROM_NAME_WITHOUT_FROM_ADDRESS = 40489;
static const int REPLY_TO_NAME_WITHOUT_REPLY_TO_ADDRESS = 40490;
static const int CURRENCY_SECURITY_ERROR = 40491;
static const int INVALID_PEER_CODE = 40492;
static const int PEER_NO_LONGER_EXISTS = 40493;
static const int CANNOT_MODIFY_TOURNAMENT_WITH_LEADERBOARD_SERVICE = 40494;
static const int NO_TOURNAMENT_ASSOCIATED_WITH_LEADERBOARD = 40495;
static const int TOURNAMENT_NOT_ASSOCIATED_WITH_LEADERBOARD = 40496;
static const int PLAYER_ALREADY_TOURNAMENT_FOR_LEADERBOARD = 40497;
static const int PLAYER_EARLY_FOR_JOINING_TOURNAMENT = 40498;
static const int NO_LEADERBOARD_FOUND = 40499;
static const int PLAYER_NOT_IN_TIME_RANGE_FOR_POSTSCORE_TOURNAMENT = 40500;
static const int LEADERBOARD_ID_BAD = 40501;
static const int SCORE_INPUT_BAD = 40502;
static const int ROUND_STARTED_EPOCH_INPUT_BAD = 40503;
static const int TOURNAMENT_CODE_INPUT_BAD = 40504;
static const int PLAYER_NOT_ENROLLED_IN_TOURNAMENT = 40505;
static const int LEADERBOARD_VERSION_ID_INVALID = 40506;
static const int NOT_ENOUGH_BALANCE_TO_JOIN_TOURNAMENT = 40507;
static const int PARENT_ALREADY_ATTACHED = 40508;
static const int PEER_ALREADY_ATTACHED = 40509;
static const int IDENTITY_NOT_ATTACHED_WITH_PARENT = 40510;
static const int IDENTITY_NOT_ATTACHED_WITH_PEER = 40511;
static const int LEADERBOARD_SCORE_UPDATE_ERROR = 40512;
static const int ERROR_CLAIMING_REWARD = 40513;
static const int NOT_ENOUGH_PARENT_BALANCE_TO_JOIN_TOURNAMENT = 40514;
static const int NOT_ENOUGH_PEER_BALANCE_TO_JOIN_TOURNAMENT = 40515;
static const int PLAYER_LATE_FOR_JOINING_TOURNAMENT = 40516;
static const int VIEWING_REWARD_FOR_NON_PROCESSED_TOURNAMENTS = 40517;
static const int NO_REWARD_ASSOCIATED_WITH_LEADERBOARD = 40518;
static const int PROFILE_PEER_NOT_FOUND = 40519;
static const int LEADERBOARD_IN_ACTIVE_STATE = 40520;
static const int LEADERBOARD_IN_CALCULATING_STATE = 40521;
static const int TOURNAMENT_RESULT_PROCESSING_FAILED = 40522;
static const int TOURNAMENT_REWARDS_ALREADY_CLAIMED = 40523;
static const int NO_TOURNAMENT_FOUND = 40524;
static const int UNEXPECTED_ERROR_RANK_ZERO_AFTER_PROCESSING = 40525;
static const int UNEXPECTED_ERROR_DELETING_TOURNAMENT_LEADERBOARD_SCORE = 40526;
static const int INVALID_RUN_STATE = 40527;
static const int LEADERBOARD_SCORE_DOESNOT_EXIST = 40528;
static const int INITIAL_SCORE_NULL = 40529;
static const int TOURNAMENT_NOTIFICATIONS_PROCESSING_FAILED = 40530;
static const int ACL_NOT_READABLE = 40531;
static const int INVALID_OWNER_ID = 40532;
static const int IMPORT_MISSING_PEERS_DATA = 40533;
static const int INVALID_CREDENTIAL = 40534;
static const int GLOBAL_ENTITY_SECURITY_ERROR = 40535;
static const int LEADERBOARD_SECURITY_ERROR = 40536;
static const int NOT_A_SYSTEM_ENTITY = 40537;
static const int CONTROLLER_ERROR = 40538;
static const int EVENT_MISSING = 40539;
static const int INVALID_XP_LEVEL = 40540;
static const int INVALID_ITUNES_ID = 40541;
static const int IMPORT_ERROR = 40542;
static const int INVALID_ENTITY_TYPE = 40543;
static const int FORM_ERROR = 40544;
static const int INVALID_PARENT = 40545;
static const int INVALID_CURRENCY = 40546;
static const int INVALID_THRESHHOLD = 40547;
static const int MATCH_ALREADY_EXISTS = 40548;
static const int FRIEND_NOT_FOUND = 40549;
static const int MATCH_NOT_FOUND = 40550;
static const int MATCH_COMPLETE = 40551;
static const int MATCH_NOT_STARTED = 40552;
static const int MATCH_EXPIRED = 40553;
static const int PLAYER_NOT_IN_MATCH = 40554;
static const int INVALID_MATCH_VERSION = 40555;
static const int INVALID_TURN_VERSION = 40556;
static const int INVALID_DEVICE_TYPE = 40557;
static const int DUPLICATE_ENTITY = 40558;
static const int DUPLICATE_EVENT = 40559;
static const int INVALID_LEADERBOARD_COUNT = 40560;
static const int DUPLICATE_LEADERBOARD = 40561;
static const int MICROSOFT_ERROR = 40562;
static const int DUPLICATE_TOURNAMENT = 40563;
static const int CREATE_SYSTEM_ENTITY_FAILED = 40564;
static const int INVALID_MAX_NUM_STREAMS = 40565;
static const int INVALID_PACKET_ID = 40566;
static const int HOOK_ERROR = 40567;
static const int INVALID_STREAM_ID = 40568;
static const int INVALID_SCAN_CODE = 40569;
static const int NO_CUSTOM_ENTITY_CONFIG_FOUND = 40570;
static const int NO_CUSTOM_ENTITY_FOUND = 40571;
static const int CLOUD_STORAGE_ERROR = 40572;
static const int NO_CUSTOM_FIELD_CONFIG_FOUND = 40573;
static const int MISSING_CUSTOM_ENTITY_QUERY = 40574;
static const int INVALID_CUSTOM_ENTITY_JSON_WHERE = 40575;
static const int INVALID_CUSTOM_ENTITY_JSON_FIELDS = 40576;
static const int ENTITY_ID_NOT_CONFIGURED = 40577;
static const int UNCONFIGURED_CUSTOM_FIELD_ERROR = 40578;
static const int CUSTOM_ENTITY_SECURITY_ERROR = 40579;
static const int CUSTOM_ENTITY_PARTIAL_UPDATE_INVALID_DATA = 40580;
static const int TOURNAMENT_PLAY_HAS_NOT_STARTED = 40581;
static const int TOURNAMENT_PLAY_HAS_ENDED = 40582;
static const int NEW_CREDENTIAL_IN_USE = 40583;
static const int OLD_CREDENTIAL_NOT_OWNED = 40584;
static const int CLOUD_CODE_SECURITY_ERROR = 40585;
static const int RTT_SERVER_NOT_FOUND = 40586;
static const int RTT_CLIENT_NOT_FOUND = 40587;
static const int NO_RTT_SERVERS_AVAILABLE = 40588;
static const int PROFILE_SESSION_MISMATCH = 40589;
static const int WAITING_FOR_ON_DEMAND_TOURNAMENT_TO_START = 40590;
static const int CDN_URLS_NOT_SUPPORTED = 40591;
static const int CLOUD_CONTAINER_ERROR = 40592;
static const int MESSAGING_FEATURE_NOT_CONFIGURED = 40593;
static const int CHAT_FEATURE_NOT_CONFIGURED = 40594;
static const int MESSAGE_NOT_FOUND = 40595;
static const int COLLECTION_CREATE_DISABLED = 40596;
static const int LEADERBAORD_COLLECTION_CREATE_DISABLED = 40597;
static const int MESSAGE_VERSION_MISMATCH = 40598;
static const int MESSAGEBOX_VERSION_MISMATCH = 40599;
static const int MESSAGE_TOO_LARGE = 40600;
static const int FEATURE_NOT_ENABLED = 40601;
static const int CHANNEL_NOT_FOUND = 40603;
static const int MALFORMED_FORM_DATA = 40604;
static const int MISSING_LAST_PACKET_RESPONSE = 40605;
static const int PACKET_IN_PROGRESS = 40606;
static const int LOBBY_MEMBER_NOT_FOUND = 40607;
static const int LOBBY_TEAM_NOT_FOUND = 40608;
static const int LOBBY_ENTRY_QUEUE_MEMBER_NOT_FOUND = 40609;
static const int INVALID_HEADER_APP_ID = 40610;
static const int LOBBY_TYPE_NOT_FOUND = 40611;
static const int LOBBY_TEAM_FULL = 40612;
static const int LOBBY_NOT_FOUND = 40613;
static const int MESSAGE_CONTENT_INVALID_JSON = 40614;
static const int RTT_FEATURE_NOT_CONFIGURED = 40615;
static const int CLOUD_CODE_ONLY_METHOD = 40616;
static const int MESSAGE_FROM_JSON_ID_MUST_BE_NULL = 40617;
static const int MESSAGE_FROM_JSON_NAME_MANDATORY = 40618;
static const int INVALID_LOBBY_STEP_ALIGNMENT = 40619;
static const int INVALID_LOBBY_STEP_STRATEGY = 40620;
static const int MESSAGING_MAX_RECIPIENTS_EXCEEDED = 40621;
static const int LOBBY_FEATURE_NOT_CONFIGURED = 40622;
static const int TOO_MANY_USERS_FOR_TEAM = 40623;
static const int TOO_MANY_USERS_FOR_LOBBY_TYPE = 40624;
static const int DIVISION_SET_DOESNOT_EXIST = 40625;
static const int LOBBY_CONFIG_NOT_FOUND = 40626;
static const int PRESENCE_NOT_INITIALIZED = 40627;
static const int PRESENCE_FEATURE_NOT_CONFIGURED = 40628;
static const int PLAYER_ALREADY_IN_ACTIVE_DIVISION_SET = 40629;
static const int TOURNAMENT_CODE_MISSING = 40630;
static const int ERROR_ASSIGNING_DIVISION_SET_INSTANCE = 40631;
static const int LEADERBOARD_NOT_DIVISION_SET_INSTANCE = 40632;
static const int DIVISION_SET_SCHEDULING_TYPE_DOES_NOT_EXIST = 40633;
static const int PRESENCE_ACTIVITY_NOT_ENABLED = 40634;
static const int PRESENCE_REALTIME_NOT_ENABLED = 40635;
static const int DIVISION_SET_MAX_SIZE_REACHED = 40636;
static const int DIVISION_SET_INFO_ERROR = 40637;
static const int DIVISION_SET_API_MUST_BE_USED = 40638;
static const int API_CALL_REJECTED = 40639;
static const int LEADERBOARD_TOURNAMENT_TEMPLATE_ONLY = 40640;
static const int INVALID_TOURNAMENT_JOB_ID = 40641;
static const int LEADERBOARD_ROTATION_ERROR = 40642;
static const int CLOUD_COMPUTING_ERROR = 40643;
static const int DOCKER_ERROR = 40644;
static const int ROOM_SERVER_HOST_NOT_FOUND = 40645;
static const int INVALID_ATTACHMENT_DATA = 40646;
static const int SCRIPT_PARSING_ERROR = 40647;
static const int INVALID_LOBBY_STEP_RANGES = 40648;
static const int LOG_IN_LOG_ERROR = 40649;
static const int CACHE_OBJECT_TOO_LARGE = 40650;
static const int IDENTIFY_DORMANT_USERS_FEATURE_NOT_CONFIGURED = 40651;
static const int USER_PURGE_NOTICE_NOT_CONFIGURED = 40652;
static const int INVALID_CX_ID = 40653;
static const int TOO_MANY_CACHE_OBJECTS = 40654;
static const int HOSTING_NOT_ENABLED = 40655;
static const int UNSUPPORTED_GROUP_LEADERBOARD_OPERATION = 40656;
static const int INVALID_PLAYER = 40657;
static const int TOO_MANY_LISTENERS = 40658;
static const int CREATE_FAILED = 40659;
static const int CANNOT_GIVE_ITEM_TO_SELF = 40660;
static const int INVALID_PARAMETER_VALUE = 40660;
static const int ITEM_VERSION_MISMATCH = 40661;
static const int ITEM_PUBLISH_ERROR = 40662;
static const int ITEM_NOT_FOUND = 40663;
static const int ITEM_NO_USES = 40664;
static const int ITEM_CREATE_ERROR = 40665;
static const int ITEM_COOL_DOWN = 40666;
static const int TASK_STATE_NOT_FOUND = 40667;
static const int ITEM_UPDATE_ERROR = 40668;
static const int ITEM_DELETE_ERROR = 40669;
static const int ITEM_INVALID_VALUE = 40670;
static const int ITEM_SELL_OR_PURCHASE_REVERSAL_ERROR = 40671;
static const int ITEM_GIFTED = 40672;
static const int MISSING_APP_CONTEXT = 40673;
static const int PUBLIC_KEY_IN_USE = 40674;
static const int CUSTOM_ENTITY_NOT_FOUND = 40675;
static const int ITEM_GIFTING_ERROR = 40676;
static const int ITEM_NOT_AVAILABLE_ON_BLOCKCHAIN = 40677;
static const int MISSING_BLOCKCHAIN_INTEGRATION = 40678;
static const int MISSING_BLOCKCHAIN_USER_IDENTITY = 40679;
static const int STACKABLE_ITEMS_NOT_PERMITTED_ON_BLOCKCHAIN = 40680;
static const int BLOCKCHAIN_PUBLISH_IN_PROGRESS = 40681;
static const int JWT_VERIFY_ERROR = 40682;
static const int USER_ALREADY_EXISTS = 40683;
static const int INVALID_EXT_AUTH_TYPE = 40684;
static const int CUSTOM_ENTITY_INDEX_ERROR = 40685;
static const int CUSTOM_ENTITY_UPDATE_FIELDS_ERROR = 40686;
static const int INVALID_LOBBY_STEP_ALGOS = 40687;
static const int INVALID_COMPOUND_RANGES = 40688;
static const int MISSING_COMPOUND_RANGES = 40689;
static const int MISSING_PING_DATA = 40690;
static const int INVALID_PING_STEP_ALGO = 40691;
static const int GROUP_NOT_FOUND = 40692;
static const int SCRIPT_UPDATE_FAILED = 40693;
static const int CUSTOM_ENTITY_REPLACE_ERROR = 40694;
static const int CUSTOM_ENTITY_TYPE_IMPORT_ERROR = 40695;
static const int CUSTOM_ENTITY_IMPORT_WARNING = 40696;
static const int IDENTIFY_DORMANT_USERS_FOR_EXPORT_NOT_CONFIGURED = 40697;
static const int IDENTIFY_DORMANT_USERS_FOR_EXPORT_ERROR = 40698;
static const int UPDATE_SINGLETON_FAILED = 40699;
static const int INVALID_STORE_ID = 40700;
static const int METHOD_DEPRECATED = 40701;
static const int INVALID_BILLING_PROVIDER_ID = 40702;
static const int INVALID_STORE_DATA = 40703;
static const int USER_FILE_MISSING = 40704;
static const int GLOBAL_FILE_EXISTS = 40705;
static const int INVALID_FILE_NAME = 40706;
static const int FILE_TREE_VERSION_MISMATCH = 40707;
static const int FILE_TREE_FOLDER_MISSING = 40708;
static const int FOLDER_ALREADY_EXISTS = 40709;
static const int INVALID_TREE_ID = 40710;
static const int FILE_VERSION_MISMATCH = 40711;
static const int INVALID_FOLDER_PATH = 40712;
static const int FILENAME_MISMATCH = 40713;
static const int FOLDERPATH_MISMATCH = 40714;
static const int INVALID_CHARS_IN_STRING = 40715;
static const int FOLDER_NOT_EMPTY = 40716;
static const int INVALID_IMAGE_URL = 40717;
static const int UNABLE_TO_UPDATE_PRICE = 40718;
static const int UNABLE_TO_DELETE_PRICE = 40718;
static const int WRONG_JOB_TYPE = 40719;
static const int CLOUDCODE_JOB_NOT_RUNNING = 40720;
static const int SCRIPT_HAS_DEPENDENCIES = 40721;
static const int PEER_SERVICE_NOT_PUBLISHED = 40722;
static const int MISSING_FOLDER_NAME = 40723;
static const int UPLOLAD_IN_PROGRESS = 40724;
static const int REFRESH_IN_PROGRESS = 40725;
static const int REFRESH_INTERRUPTED = 40726;
static const int GAMELIFT_ERROR = 40727;
static const int GAMELIFT_LAUNCH_ERROR = 40728;
static const int MAX_HOSTED_SERVERS_REACHED = 40729;
static const int DUPLICATE_PACKET_ID = 40730;
static const int FEATURE_NOT_SUPPORTED_BY_BILLING_PLAN = 40731;
static const int NO_FRIENDS_FOUND = 40740;
static const int PRODUCT_TRANSACTION_NOT_FOUND = 40741;
static const int ITEM_DEF_NOT_FOUND = 40742;
static const int ITEM_DEF_HAS_DEPENDENCIES = 40743;
static const int TRANSFER_JOB_IDLE_TIMEOUT = 40744;
static const int GROUP_MEMBER_ACL_MORE_RESTRICTIVE_THAN_OTHER = 40745;
static const int GROUP_MEMBER_ACL_MUST_BE_READ_WRITE_FOR_UNOWNED_ENTITY = 40746;
static const int GROUP_MEMBER_ACL_REQUIRED = 40747;
static const int GROUP_TYPE_MAX_MEMBERS_EXCEEDED = 40748;
static const int REQUEST_FAILED = 40801;
static const int RESET_QUESTS_FAILED = 40802;
static const int RESET_ALL_QUESTS_AND_MILESTONES_FAILED = 40803;
static const int MILESTONE_NOT_FOUND = 40804;
static const int MILESTONE_CREATE_ERROR = 40805;
static const int MILESTONE_UPDATE_ERROR = 40806;
static const int MILESTONE_DELETE_ERROR = 40807;
static const int MILESTONE_VERSION_ERROR = 40808;
static const int QUEST_NOT_FOUND = 40809;
static const int QUEST_CREATE_ERROR = 40810;
static const int QUEST_UPDATE_ERROR = 40811;
static const int QUEST_DELETE_ERROR = 40812;
static const int QUEST_VERSION_ERROR = 40813;
static const int QUEST_ADD_MILESTONE_ERROR = 40814;
static const int QUEST_DELETE_MILESTONE_ERROR = 40815;
static const int QUEST_REORDER_MILESTONES_ERROR = 40816;
static const int PROMOTION_NOT_FOUND = 40820;
static const int VERSION_MISMATCH = 40821;
static const int UNSUPPORTED_CRITERIA_FOR_SHARDED_COLLECTIONS = 40822;
static const int STEAM_ERROR = 40830;
static const int INVALID_LEADERBOARD_TOURNAMENT_SETTING = 40840;
static const int LEADERBOARD_EDIT_TOURNAMENT_SETTINGS_ERROR = 40841;
static const int LEADERBOARD_SCORES_EXIST = 40842;
static const int TOURNAMENT_SCORES_EXIST = 40843;
static const int LEADERBOARD_DBVERSION_MISMATCH = 40844;
static const int LEADERBOARD_API_DOES_NOT_APPLY = 40845;
static const int MISSING_CONFIG = 40900;
static const int INVALID_SAML_RESP = 40901;
static const int MISSING_PAGE_NAME = 40902;
static const int INVALID_PAGE_NAME = 40903;
static const int MALFORMED_RELAY_STATE = 40904;
static const int INVALID_RESPONSE_ID = 40905;
static const int LOGOUT_ERROR = 40906;
static const int SCRIPT_EXISTS = 40907;
static const int SCRIPT_DUPLICATE_EXISTS = 40908;
static const int INVALID_UPLOAD_EXTENSION = 40909;
static const int NO_TWITTER_CONSUMER_KEY = 500001;
static const int NO_TWITTER_CONSUMER_SECRET = 500002;
static const int INVALID_CONFIGURATION = 500003;
static const int ERROR_GETTING_REQUEST_TOKEN = 500004;
static const int ERROR_GETTING_ACCESS_TOKEN = 500005;
static const int TWITTER_AUTH_ERROR = 500006;
static const int TWITTER_ERROR = 500007;
static const int FACEBOOK_ERROR = 500010;
static const int FACEBOOK_SECRET_MISMATCH = 500011;
static const int FACEBOOK_AUTHENTICATION_ERROR = 500012;
static const int FACEBOOK_APPLICATION_TOKEN_REQUEST_ERROR = 500013;
static const int FACEBOOK_BAD_APPLICATION_TOKEN_SIGNATURE = 500014;
static const int UNSUPPORTED_SOCIAL_PLATFORM_CODE = 500020;
static const int NOT_TEAM_ADMIN = 550000;
static const int NO_TEAM_ACCESS = 550001;
static const int MISSING_COMPANY_RECORD = 550002;
static const int TEAM_MEMBER_NOT_FOUND = 550003;
static const int TEAM_MEMBER_NOT_ENABLED = 550004;
static const int TEAM_MEMBER_NOT_ACTIVE = 550005;
static const int TEAM_MEMBER_LOCKED = 550006;
static const int INVALID_PASSWORD = 550007;
static const int TOKEN_INVALID = 550008;
static const int TOKEN_EXPIRED = 550009;
static const int APP_NOT_FOUND = 550010;
static const int TEMPLATE_GAME_NOT_FOUND = 550011;
static const int INVALID_TEMPLATE_GAME_TEAM = 550012;
static const int BASIC_AUTH_FAILURE = 550013;
static const int EMAIL_MISMATCH = 550014;
static const int EMAIL_ID_NOT_FOUND = 550015;
static const int MONGO_DB_EXCEPTION = 600001;
static const int CONCURRENT_LOCK_ERROR = 600002;
static const int USER_EXPORT_ERROR = 600003;
static const int POST_SCORE_ON_BEHALF_OF_ERROR = 600004;
static const int INVALID_USER_STATUS = 600005;
static const int SLACK_WEBHOOK_SEND_ERROR = 600006;
static const int SLACK_NOT_ENABLED_FOR_APP = 600007;
static const int ERROR_AQUIRING_LOBBY_LOCK = 600008;
static const int ERROR_SETTING_NEW_LOBBY_OWNER = 600009;
static const int ERROR_SWITCHING_TEAMS = 600010;
static const int DEPLOY_FAILED = 600011;
static const int BUILDER_API_KEY_NOT_FOUND = 60100;
static const int BUILDER_API_INVALID_KEY_SCOPE = 60101;
static const int BUILDER_API_UPDATED_AT_MISMATCH = 60102;
static const int BUILDER_API_TEAM_NAME_MISMATCH = 60103;
static const int BUILDER_API_TEAM_HAS_APPS = 60104;
static const int BUILDER_API_UNEXPECTED_EXCEPTION = 60105;
static const int BUILDER_API_PARTIAL_TEAM_DELETION = 60106;
static const int BUILDER_API_APP_DELETED = 60107;
static const int BUILDER_API_APP_DISABLED = 60108;
static const int BUILDER_API_APP_IS_LIVE = 60109;
static const int BUILDER_API_APP_SUSPENDED = 60110;
static const int BUILDER_API_CREATED_AT_MISMATCH = 60111;
static const int PLAYSTATION_NETWORK_ERROR = 60200;
static const int RTT_LEFT_BY_CHOICE = 80000;
static const int RTT_EVICTED = 80001;
static const int RTT_LOST_CONNECTION = 80002;
static const int RTT_TIMEOUT = 80100;
static const int RTT_ROOM_READY = 80101;
static const int RTT_ROOM_CANCELLED = 80102;
static const int RTT_ERROR_ASSIGNING_ROOM = 80103;
static const int RTT_ERROR_LAUNCHING_ROOM = 80104;
static const int RTT_BY_REQUEST = 80105;
static const int RTT_NO_LOBBIES_FOUND = 80200;
static const int RTT_FIND_REQUEST_CANCELLED = 80201;
static const int CLIENT_NETWORK_ERROR_TIMEOUT = 90001;
static const int CLIENT_UPLOAD_FILE_CANCELLED = 90100;
static const int CLIENT_UPLOAD_FILE_TIMED_OUT = 90101;
static const int CLIENT_UPLOAD_FILE_UNKNOWN = 90102;
static const int CLIENT_DISABLED = 90200;
static const int ITUNES_PURCHASE_ALREADY_CLAIMED = APPLE_TRANS_ID_ALREADY_CLAIMED;
static const int CHILD_USER_MISSING = CHILD_PLAYER_MISSING;
static const int DISABLED_APP = DISABLED_GAME;
static const int APPS_NOT_IN_SAME_COMPANY = GAMES_NOT_IN_SAME_COMPANY;
static const int APP_LIMIT_REACHED = GAME_LIMIT_REACHED;
static const int APP_PARENT_MISMATCH = GAME_PARENT_MISMATCH;
static const int APP_RUNSTATE_DISABLED = GAME_RUNSTATE_DISABLED;
static const int APP_VERSION_NOT_SUPPORTED = GAME_VERSION_NOT_SUPPORTED;
static const int APP_VERSION_NO_LONGER_SUPPORTED = GAME_VERSION_NOT_SUPPORTED;
static const int IMPORT_MISSING_APP_DATA = IMPORT_MISSING_GAME_DATA;
static const int INVALID_APP_ID = INVALID_GAME_ID;
static const int INVALID_USER_ID = INVALID_PLAYER_ID;
static const int INVALID_USER_STATISTICS_EVENT_NAME = INVALID_PLAYER_STATISTICS_EVENT_NAME;
static const int MISSING_APP_PARENT = MISSING_GAME_PARENT;
static const int MISSING_USER_ID = MISSING_PLAYER_ID;
static const int MISSING_USER_PARENT = MISSING_PLAYER_PARENT;
static const int USER_PARENT_MISMATCH = PLAYER_PARENT_MISMATCH;
static const int USER_SESSION_EXPIRED = PLAYER_SESSION_EXPIRED;
static const int USER_SESSION_LOGGED_OUT = PLAYER_SESSION_LOGGED_OUT;
static const int USER_SESSION_MISMATCH = PLAYER_SESSION_MISMATCH;
static const int UNABLE_TO_VALIDATE_USER = UNABLE_TO_VALIDATE_PLAYER;

#endif
