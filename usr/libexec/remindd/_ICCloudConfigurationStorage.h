//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICCloudThrottlingPolicy, NSDictionary, NSNumber, NSString;

@interface _ICCloudConfigurationStorage : NSObject
{
    NSString *_minimumClientVersion;	// 8 = 0x8
    ICCloudThrottlingPolicy *_throttlingPolicy;	// 16 = 0x10
    double _pollingInterval;	// 24 = 0x18
    unsigned long long _maxInlineAssetSizeBytes;	// 32 = 0x20
    NSNumber *_maximumAttachmentSizeMB;	// 40 = 0x28
    unsigned long long _maxAttachmentsPerNote;	// 48 = 0x30
    unsigned long long _maxSubAttachmentsPerAttachment;	// 56 = 0x38
    unsigned long long _resultsLimitPerSyncOperation;	// 64 = 0x40
    unsigned long long _fetchBatchSize;	// 72 = 0x48
    unsigned long long _fetchCacheCountLimit;	// 80 = 0x50
    double _reachabilityChangeSyncThrottleInterval;	// 88 = 0x58
    double _launchAndSignificantTimeChangePollThrottleInterval;	// 96 = 0x60
    double _persistedSubscriptionIDsValidityPeriod;	// 104 = 0x68
    double _apsDebouncerDefaultInterval;	// 112 = 0x70
    double _apsDebouncerMigrationInProgressInterval;	// 120 = 0x78
    double _apsDebouncerWatchDefaultInterval;	// 128 = 0x80
    double _apsDebouncerWatchMigrationInProgressInterval;	// 136 = 0x88
    double _accountChangedDebouncerInterval;	// 144 = 0x90
    double _mergeLocalObjectsInitialRetryInterval;	// 152 = 0x98
    unsigned long long _mergeLocalObjectsMaximumRetryCount;	// 160 = 0xa0
    double _mergeLocalObjectsRetryStartOverThrottleInterval;	// 168 = 0xa8
    double _cloudSchemaCatchUpSyncInitialRetryInterval;	// 176 = 0xb0
    unsigned long long _cloudSchemaCatchUpSyncMaximumRetryCount;	// 184 = 0xb8
    unsigned long long _fetchDatabaseChangesOperationPerScopePerAccountMaximumRetryCount;	// 192 = 0xc0
    unsigned long long _objectEffectiveVersionValidationFlushBatchSize;	// 200 = 0xc8
    NSDictionary *_suggestedAttributesTrainingOverrides;	// 208 = 0xd0
    NSDictionary *_suggestedAttributesHarvestingOverrides;	// 216 = 0xd8
    double _manualSortHintClientSideExpiration;	// 224 = 0xe0
    NSString *_manualSortHintLastAccessedUpdatePolicy;	// 232 = 0xe8
    double _templatePublicLinkTTL;	// 240 = 0xf0
    double _templatePublicLinkOperationTimeoutInterval;	// 248 = 0xf8
    unsigned long long _alarmIDsLimitPerReminder;	// 256 = 0x100
    double _tapToRadarThrottlingInterval;	// 264 = 0x108
    double _housekeepingActivityMinimumDelay;	// 272 = 0x110
    double _cloudConfigurationDownloadThrottleInterval;	// 280 = 0x118
    NSNumber *_extraneousAlarmsCleanUpTriggerReductionFactor;	// 288 = 0x120
    unsigned long long _extraneousAlarmsDeleteCountLimit;	// 296 = 0x128
    unsigned long long _extraneousAlarmsDeleteCountThreshold;	// 304 = 0x130
    double _extraneousAlarmsBackoffThrottleInterval;	// 312 = 0x138
    double _extraneousAlarmsThrottleInterval;	// 320 = 0x140
    double _extraneousAlarmsCollectorDebounceInterval;	// 328 = 0x148
    double _staledFileAttachmentCleanupDefaultThrottleInterval;	// 336 = 0x150
    double _staledFileAttachmentCleanupBackoffThrottleInterval;	// 344 = 0x158
    NSNumber *_staledFileAttachmentCleanupRateReduceFactor;	// 352 = 0x160
    unsigned long long _staledFileAttachmentCleanupPerRunDeleteLimit;	// 360 = 0x168
    double _imageDeduplicationDefaultThrottleInterval;	// 368 = 0x170
    double _imageDeduplicationBackoffThrottleInterval;	// 376 = 0x178
    NSNumber *_imageDeduplicationRateReduceFactor;	// 384 = 0x180
    unsigned long long _imageDeduplicationApproximatePerRunDeleteLimit;	// 392 = 0x188
    unsigned long long _appStoreReviewCreatedOrCompletedRemindersCountThreshold;	// 400 = 0x190
    unsigned long long _appStoreReviewNumberOfForegroundsThreshold;	// 408 = 0x198
    double _appStoreReviewTimeIntervalOfInterest;	// 416 = 0x1a0
    double _appStoreReviewTimeIntervalSinceInitialForeground;	// 424 = 0x1a8
    double _appStoreReviewTimeIntervalSinceLastPrompt;	// 432 = 0x1b0
    double _appStoreReviewTimeIntervalSinceLastFetch;	// 440 = 0x1b8
    double _iCloudIsOffTimeIntervalSinceLastPrompt;	// 448 = 0x1c0
}

- (void).cxx_destruct;	// IMP=0x002000000004be48
@property double iCloudIsOffTimeIntervalSinceLastPrompt; // @synthesize iCloudIsOffTimeIntervalSinceLastPrompt=_iCloudIsOffTimeIntervalSinceLastPrompt;
@property double appStoreReviewTimeIntervalSinceLastFetch; // @synthesize appStoreReviewTimeIntervalSinceLastFetch=_appStoreReviewTimeIntervalSinceLastFetch;
@property double appStoreReviewTimeIntervalSinceLastPrompt; // @synthesize appStoreReviewTimeIntervalSinceLastPrompt=_appStoreReviewTimeIntervalSinceLastPrompt;
@property double appStoreReviewTimeIntervalSinceInitialForeground; // @synthesize appStoreReviewTimeIntervalSinceInitialForeground=_appStoreReviewTimeIntervalSinceInitialForeground;
@property double appStoreReviewTimeIntervalOfInterest; // @synthesize appStoreReviewTimeIntervalOfInterest=_appStoreReviewTimeIntervalOfInterest;
@property unsigned long long appStoreReviewNumberOfForegroundsThreshold; // @synthesize appStoreReviewNumberOfForegroundsThreshold=_appStoreReviewNumberOfForegroundsThreshold;
@property unsigned long long appStoreReviewCreatedOrCompletedRemindersCountThreshold; // @synthesize appStoreReviewCreatedOrCompletedRemindersCountThreshold=_appStoreReviewCreatedOrCompletedRemindersCountThreshold;
@property unsigned long long imageDeduplicationApproximatePerRunDeleteLimit; // @synthesize imageDeduplicationApproximatePerRunDeleteLimit=_imageDeduplicationApproximatePerRunDeleteLimit;
@property(retain) NSNumber *imageDeduplicationRateReduceFactor; // @synthesize imageDeduplicationRateReduceFactor=_imageDeduplicationRateReduceFactor;
@property double imageDeduplicationBackoffThrottleInterval; // @synthesize imageDeduplicationBackoffThrottleInterval=_imageDeduplicationBackoffThrottleInterval;
@property double imageDeduplicationDefaultThrottleInterval; // @synthesize imageDeduplicationDefaultThrottleInterval=_imageDeduplicationDefaultThrottleInterval;
@property unsigned long long staledFileAttachmentCleanupPerRunDeleteLimit; // @synthesize staledFileAttachmentCleanupPerRunDeleteLimit=_staledFileAttachmentCleanupPerRunDeleteLimit;
@property(retain) NSNumber *staledFileAttachmentCleanupRateReduceFactor; // @synthesize staledFileAttachmentCleanupRateReduceFactor=_staledFileAttachmentCleanupRateReduceFactor;
@property double staledFileAttachmentCleanupBackoffThrottleInterval; // @synthesize staledFileAttachmentCleanupBackoffThrottleInterval=_staledFileAttachmentCleanupBackoffThrottleInterval;
@property double staledFileAttachmentCleanupDefaultThrottleInterval; // @synthesize staledFileAttachmentCleanupDefaultThrottleInterval=_staledFileAttachmentCleanupDefaultThrottleInterval;
@property double extraneousAlarmsCollectorDebounceInterval; // @synthesize extraneousAlarmsCollectorDebounceInterval=_extraneousAlarmsCollectorDebounceInterval;
@property double extraneousAlarmsThrottleInterval; // @synthesize extraneousAlarmsThrottleInterval=_extraneousAlarmsThrottleInterval;
@property double extraneousAlarmsBackoffThrottleInterval; // @synthesize extraneousAlarmsBackoffThrottleInterval=_extraneousAlarmsBackoffThrottleInterval;
@property unsigned long long extraneousAlarmsDeleteCountThreshold; // @synthesize extraneousAlarmsDeleteCountThreshold=_extraneousAlarmsDeleteCountThreshold;
@property unsigned long long extraneousAlarmsDeleteCountLimit; // @synthesize extraneousAlarmsDeleteCountLimit=_extraneousAlarmsDeleteCountLimit;
@property(retain) NSNumber *extraneousAlarmsCleanUpTriggerReductionFactor; // @synthesize extraneousAlarmsCleanUpTriggerReductionFactor=_extraneousAlarmsCleanUpTriggerReductionFactor;
@property double cloudConfigurationDownloadThrottleInterval; // @synthesize cloudConfigurationDownloadThrottleInterval=_cloudConfigurationDownloadThrottleInterval;
@property double housekeepingActivityMinimumDelay; // @synthesize housekeepingActivityMinimumDelay=_housekeepingActivityMinimumDelay;
@property double tapToRadarThrottlingInterval; // @synthesize tapToRadarThrottlingInterval=_tapToRadarThrottlingInterval;
@property unsigned long long alarmIDsLimitPerReminder; // @synthesize alarmIDsLimitPerReminder=_alarmIDsLimitPerReminder;
@property double templatePublicLinkOperationTimeoutInterval; // @synthesize templatePublicLinkOperationTimeoutInterval=_templatePublicLinkOperationTimeoutInterval;
@property double templatePublicLinkTTL; // @synthesize templatePublicLinkTTL=_templatePublicLinkTTL;
@property(retain) NSString *manualSortHintLastAccessedUpdatePolicy; // @synthesize manualSortHintLastAccessedUpdatePolicy=_manualSortHintLastAccessedUpdatePolicy;
@property double manualSortHintClientSideExpiration; // @synthesize manualSortHintClientSideExpiration=_manualSortHintClientSideExpiration;
@property(retain) NSDictionary *suggestedAttributesHarvestingOverrides; // @synthesize suggestedAttributesHarvestingOverrides=_suggestedAttributesHarvestingOverrides;
@property(retain) NSDictionary *suggestedAttributesTrainingOverrides; // @synthesize suggestedAttributesTrainingOverrides=_suggestedAttributesTrainingOverrides;
@property unsigned long long objectEffectiveVersionValidationFlushBatchSize; // @synthesize objectEffectiveVersionValidationFlushBatchSize=_objectEffectiveVersionValidationFlushBatchSize;
@property unsigned long long fetchDatabaseChangesOperationPerScopePerAccountMaximumRetryCount; // @synthesize fetchDatabaseChangesOperationPerScopePerAccountMaximumRetryCount=_fetchDatabaseChangesOperationPerScopePerAccountMaximumRetryCount;
@property unsigned long long cloudSchemaCatchUpSyncMaximumRetryCount; // @synthesize cloudSchemaCatchUpSyncMaximumRetryCount=_cloudSchemaCatchUpSyncMaximumRetryCount;
@property double cloudSchemaCatchUpSyncInitialRetryInterval; // @synthesize cloudSchemaCatchUpSyncInitialRetryInterval=_cloudSchemaCatchUpSyncInitialRetryInterval;
@property double mergeLocalObjectsRetryStartOverThrottleInterval; // @synthesize mergeLocalObjectsRetryStartOverThrottleInterval=_mergeLocalObjectsRetryStartOverThrottleInterval;
@property unsigned long long mergeLocalObjectsMaximumRetryCount; // @synthesize mergeLocalObjectsMaximumRetryCount=_mergeLocalObjectsMaximumRetryCount;
@property double mergeLocalObjectsInitialRetryInterval; // @synthesize mergeLocalObjectsInitialRetryInterval=_mergeLocalObjectsInitialRetryInterval;
@property double accountChangedDebouncerInterval; // @synthesize accountChangedDebouncerInterval=_accountChangedDebouncerInterval;
@property double apsDebouncerWatchMigrationInProgressInterval; // @synthesize apsDebouncerWatchMigrationInProgressInterval=_apsDebouncerWatchMigrationInProgressInterval;
@property double apsDebouncerWatchDefaultInterval; // @synthesize apsDebouncerWatchDefaultInterval=_apsDebouncerWatchDefaultInterval;
@property double apsDebouncerMigrationInProgressInterval; // @synthesize apsDebouncerMigrationInProgressInterval=_apsDebouncerMigrationInProgressInterval;
@property double apsDebouncerDefaultInterval; // @synthesize apsDebouncerDefaultInterval=_apsDebouncerDefaultInterval;
@property double persistedSubscriptionIDsValidityPeriod; // @synthesize persistedSubscriptionIDsValidityPeriod=_persistedSubscriptionIDsValidityPeriod;
@property double launchAndSignificantTimeChangePollThrottleInterval; // @synthesize launchAndSignificantTimeChangePollThrottleInterval=_launchAndSignificantTimeChangePollThrottleInterval;
@property double reachabilityChangeSyncThrottleInterval; // @synthesize reachabilityChangeSyncThrottleInterval=_reachabilityChangeSyncThrottleInterval;
@property unsigned long long fetchCacheCountLimit; // @synthesize fetchCacheCountLimit=_fetchCacheCountLimit;
@property unsigned long long fetchBatchSize; // @synthesize fetchBatchSize=_fetchBatchSize;
@property unsigned long long resultsLimitPerSyncOperation; // @synthesize resultsLimitPerSyncOperation=_resultsLimitPerSyncOperation;
@property unsigned long long maxSubAttachmentsPerAttachment; // @synthesize maxSubAttachmentsPerAttachment=_maxSubAttachmentsPerAttachment;
@property unsigned long long maxAttachmentsPerNote; // @synthesize maxAttachmentsPerNote=_maxAttachmentsPerNote;
@property(retain) NSNumber *maximumAttachmentSizeMB; // @synthesize maximumAttachmentSizeMB=_maximumAttachmentSizeMB;
@property unsigned long long maxInlineAssetSizeBytes; // @synthesize maxInlineAssetSizeBytes=_maxInlineAssetSizeBytes;
@property double pollingInterval; // @synthesize pollingInterval=_pollingInterval;
@property(retain) ICCloudThrottlingPolicy *throttlingPolicy; // @synthesize throttlingPolicy=_throttlingPolicy;
@property(retain) NSString *minimumClientVersion; // @synthesize minimumClientVersion=_minimumClientVersion;
- (void)downloadRemoteConfiguration;	// IMP=0x001000000004b84d

@end

