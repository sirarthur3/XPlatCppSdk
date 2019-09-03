#pragma once

#include <playfab/PlayFabBaseModel.h>
#include <playfab/PlayFabJsonHeaders.h>

namespace PlayFab
{
    enum PlayFabErrorCode
    {
        PlayFabErrorHostnameNotFound = 1,
        PlayFabErrorConnectionTimeout,
        PlayFabErrorConnectionRefused,
        PlayFabErrorSocketError,
        PlayFabErrorSuccess = 0,
        PlayFabErrorUnkownError = 500,
        PlayFabErrorInvalidParams = 1000,
        PlayFabErrorAccountNotFound = 1001,
        PlayFabErrorAccountBanned = 1002,
        PlayFabErrorInvalidUsernameOrPassword = 1003,
        PlayFabErrorInvalidTitleId = 1004,
        PlayFabErrorInvalidEmailAddress = 1005,
        PlayFabErrorEmailAddressNotAvailable = 1006,
        PlayFabErrorInvalidUsername = 1007,
        PlayFabErrorInvalidPassword = 1008,
        PlayFabErrorUsernameNotAvailable = 1009,
        PlayFabErrorInvalidSteamTicket = 1010,
        PlayFabErrorAccountAlreadyLinked = 1011,
        PlayFabErrorLinkedAccountAlreadyClaimed = 1012,
        PlayFabErrorInvalidFacebookToken = 1013,
        PlayFabErrorAccountNotLinked = 1014,
        PlayFabErrorFailedByPaymentProvider = 1015,
        PlayFabErrorCouponCodeNotFound = 1016,
        PlayFabErrorInvalidContainerItem = 1017,
        PlayFabErrorContainerNotOwned = 1018,
        PlayFabErrorKeyNotOwned = 1019,
        PlayFabErrorInvalidItemIdInTable = 1020,
        PlayFabErrorInvalidReceipt = 1021,
        PlayFabErrorReceiptAlreadyUsed = 1022,
        PlayFabErrorReceiptCancelled = 1023,
        PlayFabErrorGameNotFound = 1024,
        PlayFabErrorGameModeNotFound = 1025,
        PlayFabErrorInvalidGoogleToken = 1026,
        PlayFabErrorUserIsNotPartOfDeveloper = 1027,
        PlayFabErrorInvalidTitleForDeveloper = 1028,
        PlayFabErrorTitleNameConflicts = 1029,
        PlayFabErrorUserisNotValid = 1030,
        PlayFabErrorValueAlreadyExists = 1031,
        PlayFabErrorBuildNotFound = 1032,
        PlayFabErrorPlayerNotInGame = 1033,
        PlayFabErrorInvalidTicket = 1034,
        PlayFabErrorInvalidDeveloper = 1035,
        PlayFabErrorInvalidOrderInfo = 1036,
        PlayFabErrorRegistrationIncomplete = 1037,
        PlayFabErrorInvalidPlatform = 1038,
        PlayFabErrorUnknownError = 1039,
        PlayFabErrorSteamApplicationNotOwned = 1040,
        PlayFabErrorWrongSteamAccount = 1041,
        PlayFabErrorTitleNotActivated = 1042,
        PlayFabErrorRegistrationSessionNotFound = 1043,
        PlayFabErrorNoSuchMod = 1044,
        PlayFabErrorFileNotFound = 1045,
        PlayFabErrorDuplicateEmail = 1046,
        PlayFabErrorItemNotFound = 1047,
        PlayFabErrorItemNotOwned = 1048,
        PlayFabErrorItemNotRecycleable = 1049,
        PlayFabErrorItemNotAffordable = 1050,
        PlayFabErrorInvalidVirtualCurrency = 1051,
        PlayFabErrorWrongVirtualCurrency = 1052,
        PlayFabErrorWrongPrice = 1053,
        PlayFabErrorNonPositiveValue = 1054,
        PlayFabErrorInvalidRegion = 1055,
        PlayFabErrorRegionAtCapacity = 1056,
        PlayFabErrorServerFailedToStart = 1057,
        PlayFabErrorNameNotAvailable = 1058,
        PlayFabErrorInsufficientFunds = 1059,
        PlayFabErrorInvalidDeviceID = 1060,
        PlayFabErrorInvalidPushNotificationToken = 1061,
        PlayFabErrorNoRemainingUses = 1062,
        PlayFabErrorInvalidPaymentProvider = 1063,
        PlayFabErrorPurchaseInitializationFailure = 1064,
        PlayFabErrorDuplicateUsername = 1065,
        PlayFabErrorInvalidBuyerInfo = 1066,
        PlayFabErrorNoGameModeParamsSet = 1067,
        PlayFabErrorBodyTooLarge = 1068,
        PlayFabErrorReservedWordInBody = 1069,
        PlayFabErrorInvalidTypeInBody = 1070,
        PlayFabErrorInvalidRequest = 1071,
        PlayFabErrorReservedEventName = 1072,
        PlayFabErrorInvalidUserStatistics = 1073,
        PlayFabErrorNotAuthenticated = 1074,
        PlayFabErrorStreamAlreadyExists = 1075,
        PlayFabErrorErrorCreatingStream = 1076,
        PlayFabErrorStreamNotFound = 1077,
        PlayFabErrorInvalidAccount = 1078,
        PlayFabErrorPurchaseDoesNotExist = 1080,
        PlayFabErrorInvalidPurchaseTransactionStatus = 1081,
        PlayFabErrorAPINotEnabledForGameClientAccess = 1082,
        PlayFabErrorNoPushNotificationARNForTitle = 1083,
        PlayFabErrorBuildAlreadyExists = 1084,
        PlayFabErrorBuildPackageDoesNotExist = 1085,
        PlayFabErrorCustomAnalyticsEventsNotEnabledForTitle = 1087,
        PlayFabErrorInvalidSharedGroupId = 1088,
        PlayFabErrorNotAuthorized = 1089,
        PlayFabErrorMissingTitleGoogleProperties = 1090,
        PlayFabErrorInvalidItemProperties = 1091,
        PlayFabErrorInvalidPSNAuthCode = 1092,
        PlayFabErrorInvalidItemId = 1093,
        PlayFabErrorPushNotEnabledForAccount = 1094,
        PlayFabErrorPushServiceError = 1095,
        PlayFabErrorReceiptDoesNotContainInAppItems = 1096,
        PlayFabErrorReceiptContainsMultipleInAppItems = 1097,
        PlayFabErrorInvalidBundleID = 1098,
        PlayFabErrorJavascriptException = 1099,
        PlayFabErrorInvalidSessionTicket = 1100,
        PlayFabErrorUnableToConnectToDatabase = 1101,
        PlayFabErrorInternalServerError = 1110,
        PlayFabErrorInvalidReportDate = 1111,
        PlayFabErrorReportNotAvailable = 1112,
        PlayFabErrorDatabaseThroughputExceeded = 1113,
        PlayFabErrorInvalidGameTicket = 1115,
        PlayFabErrorExpiredGameTicket = 1116,
        PlayFabErrorGameTicketDoesNotMatchLobby = 1117,
        PlayFabErrorLinkedDeviceAlreadyClaimed = 1118,
        PlayFabErrorDeviceAlreadyLinked = 1119,
        PlayFabErrorDeviceNotLinked = 1120,
        PlayFabErrorPartialFailure = 1121,
        PlayFabErrorPublisherNotSet = 1122,
        PlayFabErrorServiceUnavailable = 1123,
        PlayFabErrorVersionNotFound = 1124,
        PlayFabErrorRevisionNotFound = 1125,
        PlayFabErrorInvalidPublisherId = 1126,
        PlayFabErrorDownstreamServiceUnavailable = 1127,
        PlayFabErrorAPINotIncludedInTitleUsageTier = 1128,
        PlayFabErrorDAULimitExceeded = 1129,
        PlayFabErrorAPIRequestLimitExceeded = 1130,
        PlayFabErrorInvalidAPIEndpoint = 1131,
        PlayFabErrorBuildNotAvailable = 1132,
        PlayFabErrorConcurrentEditError = 1133,
        PlayFabErrorContentNotFound = 1134,
        PlayFabErrorCharacterNotFound = 1135,
        PlayFabErrorCloudScriptNotFound = 1136,
        PlayFabErrorContentQuotaExceeded = 1137,
        PlayFabErrorInvalidCharacterStatistics = 1138,
        PlayFabErrorPhotonNotEnabledForTitle = 1139,
        PlayFabErrorPhotonApplicationNotFound = 1140,
        PlayFabErrorPhotonApplicationNotAssociatedWithTitle = 1141,
        PlayFabErrorInvalidEmailOrPassword = 1142,
        PlayFabErrorFacebookAPIError = 1143,
        PlayFabErrorInvalidContentType = 1144,
        PlayFabErrorKeyLengthExceeded = 1145,
        PlayFabErrorDataLengthExceeded = 1146,
        PlayFabErrorTooManyKeys = 1147,
        PlayFabErrorFreeTierCannotHaveVirtualCurrency = 1148,
        PlayFabErrorMissingAmazonSharedKey = 1149,
        PlayFabErrorAmazonValidationError = 1150,
        PlayFabErrorInvalidPSNIssuerId = 1151,
        PlayFabErrorPSNInaccessible = 1152,
        PlayFabErrorExpiredAuthToken = 1153,
        PlayFabErrorFailedToGetEntitlements = 1154,
        PlayFabErrorFailedToConsumeEntitlement = 1155,
        PlayFabErrorTradeAcceptingUserNotAllowed = 1156,
        PlayFabErrorTradeInventoryItemIsAssignedToCharacter = 1157,
        PlayFabErrorTradeInventoryItemIsBundle = 1158,
        PlayFabErrorTradeStatusNotValidForCancelling = 1159,
        PlayFabErrorTradeStatusNotValidForAccepting = 1160,
        PlayFabErrorTradeDoesNotExist = 1161,
        PlayFabErrorTradeCancelled = 1162,
        PlayFabErrorTradeAlreadyFilled = 1163,
        PlayFabErrorTradeWaitForStatusTimeout = 1164,
        PlayFabErrorTradeInventoryItemExpired = 1165,
        PlayFabErrorTradeMissingOfferedAndAcceptedItems = 1166,
        PlayFabErrorTradeAcceptedItemIsBundle = 1167,
        PlayFabErrorTradeAcceptedItemIsStackable = 1168,
        PlayFabErrorTradeInventoryItemInvalidStatus = 1169,
        PlayFabErrorTradeAcceptedCatalogItemInvalid = 1170,
        PlayFabErrorTradeAllowedUsersInvalid = 1171,
        PlayFabErrorTradeInventoryItemDoesNotExist = 1172,
        PlayFabErrorTradeInventoryItemIsConsumed = 1173,
        PlayFabErrorTradeInventoryItemIsStackable = 1174,
        PlayFabErrorTradeAcceptedItemsMismatch = 1175,
        PlayFabErrorInvalidKongregateToken = 1176,
        PlayFabErrorFeatureNotConfiguredForTitle = 1177,
        PlayFabErrorNoMatchingCatalogItemForReceipt = 1178,
        PlayFabErrorInvalidCurrencyCode = 1179,
        PlayFabErrorNoRealMoneyPriceForCatalogItem = 1180,
        PlayFabErrorTradeInventoryItemIsNotTradable = 1181,
        PlayFabErrorTradeAcceptedCatalogItemIsNotTradable = 1182,
        PlayFabErrorUsersAlreadyFriends = 1183,
        PlayFabErrorLinkedIdentifierAlreadyClaimed = 1184,
        PlayFabErrorCustomIdNotLinked = 1185,
        PlayFabErrorTotalDataSizeExceeded = 1186,
        PlayFabErrorDeleteKeyConflict = 1187,
        PlayFabErrorInvalidXboxLiveToken = 1188,
        PlayFabErrorExpiredXboxLiveToken = 1189,
        PlayFabErrorResettableStatisticVersionRequired = 1190,
        PlayFabErrorNotAuthorizedByTitle = 1191,
        PlayFabErrorNoPartnerEnabled = 1192,
        PlayFabErrorInvalidPartnerResponse = 1193,
        PlayFabErrorAPINotEnabledForGameServerAccess = 1194,
        PlayFabErrorStatisticNotFound = 1195,
        PlayFabErrorStatisticNameConflict = 1196,
        PlayFabErrorStatisticVersionClosedForWrites = 1197,
        PlayFabErrorStatisticVersionInvalid = 1198,
        PlayFabErrorAPIClientRequestRateLimitExceeded = 1199,
        PlayFabErrorInvalidJSONContent = 1200,
        PlayFabErrorInvalidDropTable = 1201,
        PlayFabErrorStatisticVersionAlreadyIncrementedForScheduledInterval = 1202,
        PlayFabErrorStatisticCountLimitExceeded = 1203,
        PlayFabErrorStatisticVersionIncrementRateExceeded = 1204,
        PlayFabErrorContainerKeyInvalid = 1205,
        PlayFabErrorCloudScriptExecutionTimeLimitExceeded = 1206,
        PlayFabErrorNoWritePermissionsForEvent = 1207,
        PlayFabErrorCloudScriptFunctionArgumentSizeExceeded = 1208,
        PlayFabErrorCloudScriptAPIRequestCountExceeded = 1209,
        PlayFabErrorCloudScriptAPIRequestError = 1210,
        PlayFabErrorCloudScriptHTTPRequestError = 1211,
        PlayFabErrorInsufficientGuildRole = 1212,
        PlayFabErrorGuildNotFound = 1213,
        PlayFabErrorOverLimit = 1214,
        PlayFabErrorEventNotFound = 1215,
        PlayFabErrorInvalidEventField = 1216,
        PlayFabErrorInvalidEventName = 1217,
        PlayFabErrorCatalogNotConfigured = 1218,
        PlayFabErrorOperationNotSupportedForPlatform = 1219,
        PlayFabErrorSegmentNotFound = 1220,
        PlayFabErrorStoreNotFound = 1221,
        PlayFabErrorInvalidStatisticName = 1222,
        PlayFabErrorTitleNotQualifiedForLimit = 1223,
        PlayFabErrorInvalidServiceLimitLevel = 1224,
        PlayFabErrorServiceLimitLevelInTransition = 1225,
        PlayFabErrorCouponAlreadyRedeemed = 1226,
        PlayFabErrorGameServerBuildSizeLimitExceeded = 1227,
        PlayFabErrorGameServerBuildCountLimitExceeded = 1228,
        PlayFabErrorVirtualCurrencyCountLimitExceeded = 1229,
        PlayFabErrorVirtualCurrencyCodeExists = 1230,
        PlayFabErrorTitleNewsItemCountLimitExceeded = 1231,
        PlayFabErrorInvalidTwitchToken = 1232,
        PlayFabErrorTwitchResponseError = 1233,
        PlayFabErrorProfaneDisplayName = 1234,
        PlayFabErrorUserAlreadyAdded = 1235,
        PlayFabErrorInvalidVirtualCurrencyCode = 1236,
        PlayFabErrorVirtualCurrencyCannotBeDeleted = 1237,
        PlayFabErrorIdentifierAlreadyClaimed = 1238,
        PlayFabErrorIdentifierNotLinked = 1239,
        PlayFabErrorInvalidContinuationToken = 1240,
        PlayFabErrorExpiredContinuationToken = 1241,
        PlayFabErrorInvalidSegment = 1242,
        PlayFabErrorInvalidSessionId = 1243,
        PlayFabErrorSessionLogNotFound = 1244,
        PlayFabErrorInvalidSearchTerm = 1245,
        PlayFabErrorTwoFactorAuthenticationTokenRequired = 1246,
        PlayFabErrorGameServerHostCountLimitExceeded = 1247,
        PlayFabErrorPlayerTagCountLimitExceeded = 1248,
        PlayFabErrorRequestAlreadyRunning = 1249,
        PlayFabErrorActionGroupNotFound = 1250,
        PlayFabErrorMaximumSegmentBulkActionJobsRunning = 1251,
        PlayFabErrorNoActionsOnPlayersInSegmentJob = 1252,
        PlayFabErrorDuplicateStatisticName = 1253,
        PlayFabErrorScheduledTaskNameConflict = 1254,
        PlayFabErrorScheduledTaskCreateConflict = 1255,
        PlayFabErrorInvalidScheduledTaskName = 1256,
        PlayFabErrorInvalidTaskSchedule = 1257,
        PlayFabErrorSteamNotEnabledForTitle = 1258,
        PlayFabErrorLimitNotAnUpgradeOption = 1259,
        PlayFabErrorNoSecretKeyEnabledForCloudScript = 1260,
        PlayFabErrorTaskNotFound = 1261,
        PlayFabErrorTaskInstanceNotFound = 1262,
        PlayFabErrorInvalidIdentityProviderId = 1263,
        PlayFabErrorMisconfiguredIdentityProvider = 1264,
        PlayFabErrorInvalidScheduledTaskType = 1265,
        PlayFabErrorBillingInformationRequired = 1266,
        PlayFabErrorLimitedEditionItemUnavailable = 1267,
        PlayFabErrorInvalidAdPlacementAndReward = 1268,
        PlayFabErrorAllAdPlacementViewsAlreadyConsumed = 1269,
        PlayFabErrorGoogleOAuthNotConfiguredForTitle = 1270,
        PlayFabErrorGoogleOAuthError = 1271,
        PlayFabErrorUserNotFriend = 1272,
        PlayFabErrorInvalidSignature = 1273,
        PlayFabErrorInvalidPublicKey = 1274,
        PlayFabErrorGoogleOAuthNoIdTokenIncludedInResponse = 1275,
        PlayFabErrorStatisticUpdateInProgress = 1276,
        PlayFabErrorLeaderboardVersionNotAvailable = 1277,
        PlayFabErrorStatisticAlreadyHasPrizeTable = 1279,
        PlayFabErrorPrizeTableHasOverlappingRanks = 1280,
        PlayFabErrorPrizeTableHasMissingRanks = 1281,
        PlayFabErrorPrizeTableRankStartsAtZero = 1282,
        PlayFabErrorInvalidStatistic = 1283,
        PlayFabErrorExpressionParseFailure = 1284,
        PlayFabErrorExpressionInvokeFailure = 1285,
        PlayFabErrorExpressionTooLong = 1286,
        PlayFabErrorDataUpdateRateExceeded = 1287,
        PlayFabErrorRestrictedEmailDomain = 1288,
        PlayFabErrorEncryptionKeyDisabled = 1289,
        PlayFabErrorEncryptionKeyMissing = 1290,
        PlayFabErrorEncryptionKeyBroken = 1291,
        PlayFabErrorNoSharedSecretKeyConfigured = 1292,
        PlayFabErrorSecretKeyNotFound = 1293,
        PlayFabErrorPlayerSecretAlreadyConfigured = 1294,
        PlayFabErrorAPIRequestsDisabledForTitle = 1295,
        PlayFabErrorInvalidSharedSecretKey = 1296,
        PlayFabErrorPrizeTableHasNoRanks = 1297,
        PlayFabErrorProfileDoesNotExist = 1298,
        PlayFabErrorContentS3OriginBucketNotConfigured = 1299,
        PlayFabErrorInvalidEnvironmentForReceipt = 1300,
        PlayFabErrorEncryptedRequestNotAllowed = 1301,
        PlayFabErrorSignedRequestNotAllowed = 1302,
        PlayFabErrorRequestViewConstraintParamsNotAllowed = 1303,
        PlayFabErrorBadPartnerConfiguration = 1304,
        PlayFabErrorXboxBPCertificateFailure = 1305,
        PlayFabErrorXboxXASSExchangeFailure = 1306,
        PlayFabErrorInvalidEntityId = 1307,
        PlayFabErrorStatisticValueAggregationOverflow = 1308,
        PlayFabErrorEmailMessageFromAddressIsMissing = 1309,
        PlayFabErrorEmailMessageToAddressIsMissing = 1310,
        PlayFabErrorSmtpServerAuthenticationError = 1311,
        PlayFabErrorSmtpServerLimitExceeded = 1312,
        PlayFabErrorSmtpServerInsufficientStorage = 1313,
        PlayFabErrorSmtpServerCommunicationError = 1314,
        PlayFabErrorSmtpServerGeneralFailure = 1315,
        PlayFabErrorEmailClientTimeout = 1316,
        PlayFabErrorEmailClientCanceledTask = 1317,
        PlayFabErrorEmailTemplateMissing = 1318,
        PlayFabErrorInvalidHostForTitleId = 1319,
        PlayFabErrorEmailConfirmationTokenDoesNotExist = 1320,
        PlayFabErrorEmailConfirmationTokenExpired = 1321,
        PlayFabErrorAccountDeleted = 1322,
        PlayFabErrorPlayerSecretNotConfigured = 1323,
        PlayFabErrorInvalidSignatureTime = 1324,
        PlayFabErrorNoContactEmailAddressFound = 1325,
        PlayFabErrorInvalidAuthToken = 1326,
        PlayFabErrorAuthTokenDoesNotExist = 1327,
        PlayFabErrorAuthTokenExpired = 1328,
        PlayFabErrorAuthTokenAlreadyUsedToResetPassword = 1329,
        PlayFabErrorMembershipNameTooLong = 1330,
        PlayFabErrorMembershipNotFound = 1331,
        PlayFabErrorGoogleServiceAccountInvalid = 1332,
        PlayFabErrorGoogleServiceAccountParseFailure = 1333,
        PlayFabErrorEntityTokenMissing = 1334,
        PlayFabErrorEntityTokenInvalid = 1335,
        PlayFabErrorEntityTokenExpired = 1336,
        PlayFabErrorEntityTokenRevoked = 1337,
        PlayFabErrorInvalidProductForSubscription = 1338,
        PlayFabErrorXboxInaccessible = 1339,
        PlayFabErrorSubscriptionAlreadyTaken = 1340,
        PlayFabErrorSmtpAddonNotEnabled = 1341,
        PlayFabErrorAPIConcurrentRequestLimitExceeded = 1342,
        PlayFabErrorXboxRejectedXSTSExchangeRequest = 1343,
        PlayFabErrorVariableNotDefined = 1344,
        PlayFabErrorTemplateVersionNotDefined = 1345,
        PlayFabErrorFileTooLarge = 1346,
        PlayFabErrorTitleDeleted = 1347,
        PlayFabErrorTitleContainsUserAccounts = 1348,
        PlayFabErrorTitleDeletionPlayerCleanupFailure = 1349,
        PlayFabErrorEntityFileOperationPending = 1350,
        PlayFabErrorNoEntityFileOperationPending = 1351,
        PlayFabErrorEntityProfileVersionMismatch = 1352,
        PlayFabErrorTemplateVersionTooOld = 1353,
        PlayFabErrorMembershipDefinitionInUse = 1354,
        PlayFabErrorPaymentPageNotConfigured = 1355,
        PlayFabErrorFailedLoginAttemptRateLimitExceeded = 1356,
        PlayFabErrorEntityBlockedByGroup = 1357,
        PlayFabErrorRoleDoesNotExist = 1358,
        PlayFabErrorEntityIsAlreadyMember = 1359,
        PlayFabErrorDuplicateRoleId = 1360,
        PlayFabErrorGroupInvitationNotFound = 1361,
        PlayFabErrorGroupApplicationNotFound = 1362,
        PlayFabErrorOutstandingInvitationAcceptedInstead = 1363,
        PlayFabErrorOutstandingApplicationAcceptedInstead = 1364,
        PlayFabErrorRoleIsGroupDefaultMember = 1365,
        PlayFabErrorRoleIsGroupAdmin = 1366,
        PlayFabErrorRoleNameNotAvailable = 1367,
        PlayFabErrorGroupNameNotAvailable = 1368,
        PlayFabErrorEmailReportAlreadySent = 1369,
        PlayFabErrorEmailReportRecipientBlacklisted = 1370,
        PlayFabErrorEventNamespaceNotAllowed = 1371,
        PlayFabErrorEventEntityNotAllowed = 1372,
        PlayFabErrorInvalidEntityType = 1373,
        PlayFabErrorNullTokenResultFromAad = 1374,
        PlayFabErrorInvalidTokenResultFromAad = 1375,
        PlayFabErrorNoValidCertificateForAad = 1376,
        PlayFabErrorInvalidCertificateForAad = 1377,
        PlayFabErrorDuplicateDropTableId = 1378,
        PlayFabErrorMultiplayerServerError = 1379,
        PlayFabErrorMultiplayerServerTooManyRequests = 1380,
        PlayFabErrorMultiplayerServerNoContent = 1381,
        PlayFabErrorMultiplayerServerBadRequest = 1382,
        PlayFabErrorMultiplayerServerUnauthorized = 1383,
        PlayFabErrorMultiplayerServerForbidden = 1384,
        PlayFabErrorMultiplayerServerNotFound = 1385,
        PlayFabErrorMultiplayerServerConflict = 1386,
        PlayFabErrorMultiplayerServerInternalServerError = 1387,
        PlayFabErrorMultiplayerServerUnavailable = 1388,
        PlayFabErrorExplicitContentDetected = 1389,
        PlayFabErrorPIIContentDetected = 1390,
        PlayFabErrorInvalidScheduledTaskParameter = 1391,
        PlayFabErrorPerEntityEventRateLimitExceeded = 1392,
        PlayFabErrorTitleDefaultLanguageNotSet = 1393,
        PlayFabErrorEmailTemplateMissingDefaultVersion = 1394,
        PlayFabErrorFacebookInstantGamesIdNotLinked = 1395,
        PlayFabErrorInvalidFacebookInstantGamesSignature = 1396,
        PlayFabErrorFacebookInstantGamesAuthNotConfiguredForTitle = 1397,
        PlayFabErrorEntityProfileConstraintValidationFailed = 1398,
        PlayFabErrorTelemetryIngestionKeyPending = 1399,
        PlayFabErrorTelemetryIngestionKeyNotFound = 1400,
        PlayFabErrorStatisticChildNameInvalid = 1402,
        PlayFabErrorDataIntegrityError = 1403,
        PlayFabErrorVirtualCurrencyCannotBeSetToOlderVersion = 1404,
        PlayFabErrorVirtualCurrencyMustBeWithinIntegerRange = 1405,
        PlayFabErrorEmailTemplateInvalidSyntax = 1406,
        PlayFabErrorEmailTemplateMissingCallback = 1407,
        PlayFabErrorPushNotificationTemplateInvalidPayload = 1408,
        PlayFabErrorInvalidLocalizedPushNotificationLanguage = 1409,
        PlayFabErrorMissingLocalizedPushNotificationMessage = 1410,
        PlayFabErrorPushNotificationTemplateMissingPlatformPayload = 1411,
        PlayFabErrorPushNotificationTemplatePayloadContainsInvalidJson = 1412,
        PlayFabErrorPushNotificationTemplateContainsInvalidIosPayload = 1413,
        PlayFabErrorPushNotificationTemplateContainsInvalidAndroidPayload = 1414,
        PlayFabErrorPushNotificationTemplateIosPayloadMissingNotificationBody = 1415,
        PlayFabErrorPushNotificationTemplateAndroidPayloadMissingNotificationBody = 1416,
        PlayFabErrorPushNotificationTemplateNotFound = 1417,
        PlayFabErrorPushNotificationTemplateMissingDefaultVersion = 1418,
        PlayFabErrorPushNotificationTemplateInvalidSyntax = 1419,
        PlayFabErrorPushNotificationTemplateNoCustomPayloadForV1 = 1420,
        PlayFabErrorNoLeaderboardForStatistic = 1421,
        PlayFabErrorTitleNewsMissingDefaultLanguage = 1422,
        PlayFabErrorTitleNewsNotFound = 1423,
        PlayFabErrorTitleNewsDuplicateLanguage = 1424,
        PlayFabErrorTitleNewsMissingTitleOrBody = 1425,
        PlayFabErrorTitleNewsInvalidLanguage = 1426,
        PlayFabErrorEmailRecipientBlacklisted = 1427,
        PlayFabErrorInvalidGameCenterAuthRequest = 1428,
        PlayFabErrorGameCenterAuthenticationFailed = 1429,
        PlayFabErrorCannotEnablePartiesForTitle = 1430,
        PlayFabErrorPartyError = 1431,
        PlayFabErrorPartyRequests = 1432,
        PlayFabErrorPartyNoContent = 1433,
        PlayFabErrorPartyBadRequest = 1434,
        PlayFabErrorPartyUnauthorized = 1435,
        PlayFabErrorPartyForbidden = 1436,
        PlayFabErrorPartyNotFound = 1437,
        PlayFabErrorPartyConflict = 1438,
        PlayFabErrorPartyInternalServerError = 1439,
        PlayFabErrorPartyUnavailable = 1440,
        PlayFabErrorPartyTooManyRequests = 1441,
        PlayFabErrorPushNotificationTemplateMissingName = 1442,
        PlayFabErrorCannotEnableMultiplayerServersForTitle = 1443,
        PlayFabErrorWriteAttemptedDuringExport = 1444,
        PlayFabErrorMultiplayerServerTitleQuotaCoresExceeded = 1445,
        PlayFabErrorAutomationRuleNotFound = 1446,
        PlayFabErrorEntityAPIKeyLimitExceeded = 1447,
        PlayFabErrorEntityAPIKeyNotFound = 1448,
        PlayFabErrorEntityAPIKeyOrSecretInvalid = 1449,
        PlayFabErrorEconomyServiceUnavailable = 1450,
        PlayFabErrorEconomyServiceInternalError = 1451,
        PlayFabErrorQueryRateLimitExceeded = 1452,
        PlayFabErrorEntityAPIKeyCreationDisabledForEntity = 1453,
        PlayFabErrorForbiddenByEntityPolicy = 1454,
        PlayFabErrorUpdateInventoryRateLimitExceeded = 1455,
        PlayFabErrorStudioCreationRateLimited = 1456,
        PlayFabErrorStudioCreationInProgress = 1457,
        PlayFabErrorDuplicateStudioName = 1458,
        PlayFabErrorStudioNotFound = 1459,
        PlayFabErrorStudioDeleted = 1460,
        PlayFabErrorStudioDeactivated = 1461,
        PlayFabErrorStudioActivated = 1462,
        PlayFabErrorTitleCreationRateLimited = 1463,
        PlayFabErrorTitleCreationInProgress = 1464,
        PlayFabErrorDuplicateTitleName = 1465,
        PlayFabErrorTitleActivationRateLimited = 1466,
        PlayFabErrorTitleActivationInProgress = 1467,
        PlayFabErrorTitleDeactivated = 1468,
        PlayFabErrorTitleActivated = 1469,
        PlayFabErrorCloudScriptAzureFunctionsExecutionTimeLimitExceeded = 1470,
        PlayFabErrorCloudScriptAzureFunctionsArgumentSizeExceeded = 1471,
        PlayFabErrorCloudScriptAzureFunctionsReturnSizeExceeded = 1472,
        PlayFabErrorCloudScriptAzureFunctionsHTTPRequestError = 1473,
        PlayFabErrorVirtualCurrencyBetaGetError = 1474,
        PlayFabErrorVirtualCurrencyBetaCreateError = 1475,
        PlayFabErrorVirtualCurrencyBetaInitialDepositSaveError = 1476,
        PlayFabErrorVirtualCurrencyBetaSaveError = 1477,
        PlayFabErrorVirtualCurrencyBetaDeleteError = 1478,
        PlayFabErrorVirtualCurrencyBetaRestoreError = 1479,
        PlayFabErrorVirtualCurrencyBetaSaveConflict = 1480,
        PlayFabErrorVirtualCurrencyBetaUpdateError = 1481,
        PlayFabErrorMatchmakingEntityInvalid = 2001,
        PlayFabErrorMatchmakingPlayerAttributesInvalid = 2002,
        PlayFabErrorMatchmakingQueueNotFound = 2016,
        PlayFabErrorMatchmakingMatchNotFound = 2017,
        PlayFabErrorMatchmakingTicketNotFound = 2018,
        PlayFabErrorMatchmakingAlreadyJoinedTicket = 2028,
        PlayFabErrorMatchmakingTicketAlreadyCompleted = 2029,
        PlayFabErrorMatchmakingQueueConfigInvalid = 2031,
        PlayFabErrorMatchmakingMemberProfileInvalid = 2032,
        PlayFabErrorNintendoSwitchDeviceIdNotLinked = 2034,
        PlayFabErrorMatchmakingNotEnabled = 2035,
        PlayFabErrorMatchmakingPlayerAttributesTooLarge = 2043,
        PlayFabErrorMatchmakingNumberOfPlayersInTicketTooLarge = 2044,
        PlayFabErrorMatchmakingAttributeInvalid = 2046,
        PlayFabErrorMatchmakingPlayerHasNotJoinedTicket = 2053,
        PlayFabErrorMatchmakingRateLimitExceeded = 2054,
        PlayFabErrorMatchmakingTicketMembershipLimitExceeded = 2055,
        PlayFabErrorMatchmakingUnauthorized = 2056,
        PlayFabErrorMatchmakingQueueLimitExceeded = 2057,
        PlayFabErrorMatchmakingRequestTypeMismatch = 2058,
        PlayFabErrorMatchmakingBadRequest = 2059,
        PlayFabErrorTitleConfigNotFound = 3001,
        PlayFabErrorTitleConfigUpdateConflict = 3002,
        PlayFabErrorTitleConfigSerializationError = 3003,
        PlayFabErrorCatalogEntityInvalid = 4001,
        PlayFabErrorCatalogTitleIdMissing = 4002,
        PlayFabErrorCatalogPlayerIdMissing = 4003,
        PlayFabErrorCatalogClientIdentityInvalid = 4004,
        PlayFabErrorCatalogOneOrMoreFilesInvalid = 4005,
        PlayFabErrorCatalogItemMetadataInvalid = 4006,
        PlayFabErrorCatalogItemIdInvalid = 4007,
        PlayFabErrorCatalogSearchParameterInvalid = 4008,
        PlayFabErrorCatalogFeatureDisabled = 4009,
        PlayFabErrorCatalogConfigInvalid = 4010,
        PlayFabErrorCatalogUnauthorized = 4011,
        PlayFabErrorCatalogItemTypeInvalid = 4012,
        PlayFabErrorExportInvalidStatusUpdate = 5000,
        PlayFabErrorExportInvalidPrefix = 5001,
        PlayFabErrorExportBlobContainerDoesNotExist = 5002,
        PlayFabErrorExportNotFound = 5004,
        PlayFabErrorExportCouldNotUpdate = 5005,
        PlayFabErrorExportInvalidStorageType = 5006,
        PlayFabErrorExportAmazonBucketDoesNotExist = 5007,
        PlayFabErrorExportInvalidBlobStorage = 5008,
        PlayFabErrorExportKustoException = 5009,
        PlayFabErrorExportKustoConnectionFailed = 5012,
        PlayFabErrorExportUnknownError = 5013,
        PlayFabErrorExportCantEditPendingExport = 5014,
        PlayFabErrorExportLimitExports = 5015,
        PlayFabErrorExportLimitEvents = 5016,
        PlayFabErrorTitleNotEnabledForParty = 6000,
        PlayFabErrorPartyVersionNotFound = 6001,
        PlayFabErrorMultiplayerServerBuildReferencedByMatchmakingQueue = 6002,
        PlayFabErrorExperimentationExperimentStopped = 7000,
        PlayFabErrorExperimentationExperimentRunning = 7001,
        PlayFabErrorExperimentationExperimentNotFound = 7002,
        PlayFabErrorExperimentationExperimentNeverStarted = 7003,
        PlayFabErrorExperimentationExperimentDeleted = 7004,
        PlayFabErrorExperimentationClientTimeout = 7005,
        PlayFabErrorExperimentationExceededVariantNameLength = 7006,
        PlayFabErrorExperimentationExceededMaxVariantLength = 7007,
        PlayFabErrorExperimentInvalidId = 7008,
        PlayFabErrorSnapshotNotFound = 11000,
    };

    /// <summary>
    /// The wrapper around all PlayFab responses, and all fields needed in the case of an error
    /// </summary>
    struct PlayFabError : public PlayFabBaseModel
    {
        // Serialized fields
        int HttpCode;
        std::string HttpStatus;
        PlayFabErrorCode ErrorCode;
        std::string ErrorName;
        std::string ErrorMessage;
        Json::Value ErrorDetails;
        Json::Value Data;
        // Non-serialized fields
        std::string UrlPath;
        Json::Value Request;

        void FromJson(Json::Value& input) override;
        Json::Value ToJson() const override;

        std::string GenerateErrorReport() const;
    };

    typedef std::function<void(const PlayFabError& error, void* customData)> ErrorCallback;
    typedef std::function<void(std::exception exception)> ExceptionCallback;
}
