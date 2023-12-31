//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TCCDAssumedIdentityMonitor, TCCDEventPublisher, TCCDPlatform;
@protocol OS_dispatch_source, OS_os_log;

@interface TCCDServer : NSObject
{
    NSString *_userHomeDirectory;	// 8 = 0x8
    NSString *_stateDirectory;	// 16 = 0x10
    NSString *_temporaryDirectory;	// 24 = 0x18
    NSString *_cacheDirectory;	// 32 = 0x20
    _Bool _generateBacktraceOnPrompt;	// 40 = 0x28
    _Bool _macos_isSystemServer;	// 41 = 0x29
    _Bool _allowsInternalSecurityPolicies;	// 42 = 0x2a
    _Bool _testDoComposition;	// 43 = 0x2b
    TCCDPlatform *_platform;	// 48 = 0x30
    NSObject<OS_os_log> *_logHandle;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_macos_compatibilityFileVnodeSource;	// 64 = 0x40
    TCCDEventPublisher *_eventPublisher;	// 72 = 0x48
    TCCDAssumedIdentityMonitor *_assumedIdentityMonitor;	// 80 = 0x50
}

+ (id)newErrorWithCode:(long long)arg1 format:(id)arg2 arguments:(struct __va_list_tag [1])arg3;	// IMP=0x00400000000311b6
+ (id)newErrorWithCode:(long long)arg1 format:(id)arg2;	// IMP=0x0010000000031115
- (void).cxx_destruct;	// IMP=0x00200000000398b4
@property(retain) TCCDAssumedIdentityMonitor *assumedIdentityMonitor; // @synthesize assumedIdentityMonitor=_assumedIdentityMonitor;
@property(retain) TCCDEventPublisher *eventPublisher; // @synthesize eventPublisher=_eventPublisher;
@property _Bool testDoComposition; // @synthesize testDoComposition=_testDoComposition;
@property(retain) NSObject<OS_dispatch_source> *macos_compatibilityFileVnodeSource; // @synthesize macos_compatibilityFileVnodeSource=_macos_compatibilityFileVnodeSource;
@property _Bool allowsInternalSecurityPolicies; // @synthesize allowsInternalSecurityPolicies=_allowsInternalSecurityPolicies;
@property(readonly) NSString *cacheDirectory; // @synthesize cacheDirectory=_cacheDirectory;
@property(readonly) NSString *temporaryDirectory; // @synthesize temporaryDirectory=_temporaryDirectory;
@property _Bool macos_isSystemServer; // @synthesize macos_isSystemServer=_macos_isSystemServer;
@property(retain, nonatomic) NSObject<OS_os_log> *logHandle; // @synthesize logHandle=_logHandle;
@property(retain, nonatomic) TCCDPlatform *platform; // @synthesize platform=_platform;
- (_Bool)updateAuthorizationRecordFromContext:(id)arg1 forResult:(id)arg2 syncedUpdate:(_Bool *)arg3;	// IMP=0x0010000000039022
- (void)createStateHandler;	// IMP=0x0010000000038d7d
- (id)stateDumpDictionary;	// IMP=0x0010000000038ae3
- (id)fetchAllActivePolicies;	// IMP=0x00100000000388bc
- (id)fetchAllPolicies;	// IMP=0x00100000000385f3
- (id)fetchAllOverriddenServiceNames;	// IMP=0x0010000000038483
- (id)descriptionDictionariesForAllAccessRecords;	// IMP=0x001000000003835a
- (id)fetchAllAccessRecords;	// IMP=0x0010000000038217
- (id)accessRecordFromStep:(struct sqlite3_stmt *)arg1;	// IMP=0x0010000000037d44
- (unsigned long long)numberOfRecordsForService:(id)arg1;	// IMP=0x0010000000037d2d
- (unsigned long long)numberOfRecordsForService:(id)arg1 withAuthorizationValue:(unsigned long long)arg2;	// IMP=0x0010000000037b24
- (_Bool)evaluateComposedAuthorizationToService:(id)arg1 andAccessSubject:(id)arg2 withRelation:(long long)arg3 authorizationResult:(unsigned long long *)arg4 authorizationReason:(unsigned long long *)arg5 subjectCodeIdentityDataResult:(id *)arg6;	// IMP=0x0010000000037642
- (_Bool)updateAccessRecord:(id)arg1 replaceOnly:(_Bool)arg2 doCompositionWithChildService:(_Bool)arg3 withRequestingProcess:(id)arg4 function:(id)arg5 accessIdentity:(id)arg6;	// IMP=0x0010000000035e06
- (id)translateAllFilesToEndpointSecurity:(id)arg1 withClient:(id)arg2 clientType:(int)arg3 requestingProcess:(id)arg4 function:(id)arg5 attributionChain:(id)arg6 executablePath:(id)arg7;	// IMP=0x0010000000035df0
- (_Bool)evaluateAccessToService:(id)arg1 defaultAccessAllowed:(_Bool)arg2 by:(id)arg3 checkCodeRequirements:(_Bool)arg4 authorizationResult:(unsigned long long *)arg5 authorizationReason:(unsigned long long *)arg6 subjectCodeIdentityDataResult:(id *)arg7;	// IMP=0x00100000000357dc
- (id)evaluateUserIndependentEntitlementsForAccessByAttributionChain:(id)arg1 forFunction:(id)arg2 toService:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000034e0c
- (id)_evaluateForProcess:(id)arg1 entitlementName:(id)arg2 containsService:(id)arg3 options:(unsigned long long)arg4;	// IMP=0x0010000000034ccb
- (_Bool)isAccessEntryWithAge:(int)arg1 authorizationValue:(unsigned long long)arg2 expiredForService:(id)arg3;	// IMP=0x00100000000349e7
- (void)scheduleAccessEntryExpiryCheckForService:(id)arg1;	// IMP=0x00100000000347e8
- (void)purgeAllExpiredAccessEntries;	// IMP=0x00100000000346a7
- (void)purgeExpiredAccessEntriesForService:(id)arg1;	// IMP=0x0010000000033ea7
- (id)recordFromMessage:(id)arg1 accessIdentity:(id *)arg2 error:(id *)arg3;	// IMP=0x0010000000033a2d
- (id)serviceFromMessage:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000338fd
- (_Bool)isProcessServiceCompositionManager:(id)arg1;	// IMP=0x001000000003383e
@property _Bool generateBacktraceOnPrompt;
- (_Bool)canProcess:(id)arg1 callFunction:(id)arg2 forService:(id)arg3;	// IMP=0x0010000000033345
- (_Bool)canProcess:(id)arg1 manageESClientServiceWith:(id)arg2;	// IMP=0x001000000003333d
- (void)sendAnalyticsIfMigrationPluginForProcess:(id)arg1 withService:(id)arg2 API:(id)arg3;	// IMP=0x00100000000331a3
- (_Bool)targetAuditToken:(CDStruct_4c969caf *)arg1 fromMessage:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000033117
- (id)descriptionForMessage:(id)arg1;	// IMP=0x0010000000033103
- (id)_descriptionForXPCObject:(id)arg1 depth:(int)arg2;	// IMP=0x0010000000032da9
- (id)_descriptionForXPCDictionary:(id)arg1 depth:(int)arg2;	// IMP=0x00100000000329ec
- (id)_indentForDepth:(int)arg1;	// IMP=0x0010000000032972
- (void)buildErrorString:(id)arg1 forError:(id)arg2 contextString:(id)arg3;	// IMP=0x001000000003284c
- (void)makeError:(id *)arg1 withCode:(long long)arg2 infoText:(id)arg3;	// IMP=0x0010000000032765
- (id)stringFromErrorCode:(long long)arg1;	// IMP=0x0010000000032700
- (_Bool)internalPreferenceBoolValueForName:(id)arg1 present:(out _Bool *)arg2;	// IMP=0x00100000000325f8
- (_Bool)internalPreferenceBoolValueForName:(id)arg1;	// IMP=0x00100000000324fa
@property(readonly) NSString *stateDirectory;
@property(readonly) NSString *userHomeDirectory;
- (id)init;	// IMP=0x001000000003229a
- (void)setupTemporaryDirectories;	// IMP=0x0010000000032244
- (id)setupTemporaryDirectoryForName:(int)arg1;	// IMP=0x0010000000032140
- (void)publishAccessChangedEvent:(unsigned long long)arg1 forService:(id)arg2 client:(id)arg3 clientType:(int)arg4 authValue:(unsigned long long)arg5 andKillClient:(_Bool)arg6;	// IMP=0x0010000000031dd2
- (void)updateClient:(id)arg1 client:(const char *)arg2 clientType:(int)arg3;	// IMP=0x00100000000312cb

@end

