//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPersistentContainer;

@interface RMXPCProxyHandler : NSObject
{
    _Bool _hasCommandLineEntitlement;	// 8 = 0x8
    _Bool _hasAccountChangesEntitlement;	// 9 = 0x9
    _Bool _hasConfigurationSubscriberEntitlement;	// 10 = 0xa
    _Bool _hasEnrollmentEntitlement;	// 11 = 0xb
    NSPersistentContainer *_persistentContainer;	// 16 = 0x10
}

+ (id)_activeConfigurationsByTypeForTypes:(id)arg1 persistentContainer:(id)arg2 error:(id *)arg3;	// IMP=0x0020000000095f5b
+ (id)_managementChannelWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000094490
+ (_Bool)_isConnection:(id)arg1 fromApplicationIdentifier:(id)arg2;	// IMP=0x001000000009216f
+ (_Bool)_doesConnection:(id)arg1 haveEntitlement:(id)arg2;	// IMP=0x0010000000092026
- (void).cxx_destruct;	// IMP=0x002000000009602c
@property(readonly, nonatomic) _Bool hasEnrollmentEntitlement; // @synthesize hasEnrollmentEntitlement=_hasEnrollmentEntitlement;
@property(readonly, nonatomic) _Bool hasConfigurationSubscriberEntitlement; // @synthesize hasConfigurationSubscriberEntitlement=_hasConfigurationSubscriberEntitlement;
@property(readonly, nonatomic) _Bool hasAccountChangesEntitlement; // @synthesize hasAccountChangesEntitlement=_hasAccountChangesEntitlement;
@property(readonly, nonatomic) _Bool hasCommandLineEntitlement; // @synthesize hasCommandLineEntitlement=_hasCommandLineEntitlement;
@property(readonly, nonatomic) NSPersistentContainer *persistentContainer; // @synthesize persistentContainer=_persistentContainer;
- (void)fetchConfigurationsWithTypes:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000095b56
- (void)sendStatusForSubscriptionsWithIdentifiers:(id)arg1 toManagementSourceWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000956e1
- (void)queryForStatusSubscriptionsWithIdentifiers:(id)arg1 fromManagementSourceWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000952e0
- (void)sendStatusForKeyPaths:(id)arg1 toManagementSourceWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000094caa
- (void)queryForStatusAndErrorsWithKeyPaths:(id)arg1 fromManagementSourceWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000948ef
- (void)sendStatusData:(id)arg1 toManagementSourceWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000009416f
- (void)managementChannelWithEnrollmentURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000093e75
- (void)managementChannelWithAccountIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000093b7b
- (void)deviceChannelEnrollmentExistsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000938b2
- (void)updateWithIdentifier:(id)arg1 tokensResponse:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000093591
- (void)updateWithIdentifier:(id)arg1 pushMessage:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000093270
- (void)syncWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000092f5c
- (void)unenrollWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000092c11
- (void)enrollViaMDMWithEnrollmentType:(long long)arg1 uri:(id)arg2 accountIdentifier:(id)arg3 personaIdentifier:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000009289c
- (void)enrollUserChannelWithAccountIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000092560
- (void)enrollDeviceChannelWithURI:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000092225
- (id)initWithXPCConnection:(id)arg1 persistentContainer:(id)arg2;	// IMP=0x0010000000091ef8

@end

