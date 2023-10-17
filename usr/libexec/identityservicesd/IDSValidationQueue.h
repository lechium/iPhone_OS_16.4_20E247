//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSPushHandler, NSMutableDictionary;

@interface IDSValidationQueue : NSObject
{
    _Bool _shouldUseAbsinthe;	// 8 = 0x8
    CDUnknownBlockType _validationMessageSendBlock;	// 16 = 0x10
    IDSPushHandler *_pushHandler;	// 24 = 0x18
    NSMutableDictionary *_validationInfoByMechanism;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000005a9b80
@property(retain, nonatomic) NSMutableDictionary *validationInfoByMechanism; // @synthesize validationInfoByMechanism=_validationInfoByMechanism;
@property(nonatomic) _Bool shouldUseAbsinthe; // @synthesize shouldUseAbsinthe=_shouldUseAbsinthe;
@property(retain, nonatomic) IDSPushHandler *pushHandler; // @synthesize pushHandler=_pushHandler;
@property(copy, nonatomic) CDUnknownBlockType validationMessageSendBlock; // @synthesize validationMessageSendBlock=_validationMessageSendBlock;
- (id)_validationInfoForSubsystem:(long long)arg1 createIfNil:(_Bool)arg2;	// IMP=0x00100000005a98a0
- (long long)_mechanismForSubsystem:(long long)arg1;	// IMP=0x00100000005a9860
- (void)_sendAbsintheValidationCertRequestIfNeededForSubsystem:(long long)arg1;	// IMP=0x00100000005a9840
- (void)_sendBAAValidationRequestIfNeededForSubsystem:(long long)arg1;	// IMP=0x00100000005a9820
- (void)_sendValidationRequestForSubsystem:(long long)arg1;	// IMP=0x00100000005a9780
- (void)__purgeCachedCertsForSubsystemMechanism:(long long)arg1;	// IMP=0x00100000005a9760
- (void)__cleanupValidationInfoForSubsystemMechanism:(long long)arg1;	// IMP=0x00100000005a9740
- (void)__flushValidationQueueForSubsystemMechanism:(long long)arg1;	// IMP=0x00100000005a9720
- (void)__failValidationQueueWithErrorResponseCode:(long long)arg1 forSubsystemMechanism:(long long)arg2;	// IMP=0x00100000005a9700
- (void)__failValidationQueueForSubsystemMechanism:(long long)arg1;	// IMP=0x00100000005a96c0
- (void)__queueValidationMessage:(id)arg1 subsystem:(long long)arg2 sendBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000005a9640
- (void)__removeFromQueue:(id)arg1 subsystem:(long long)arg2;	// IMP=0x00100000005a9520
- (_Bool)isBuildingContextForSubsystem:(long long)arg1;	// IMP=0x00100000005a94a0
- (void)buildValidationCredentialsIfNeededForSubsystem:(long long)arg1;	// IMP=0x00100000005a9480
- (void)queueBuildingValidationDataIfNecessaryForMessage:(id)arg1 subsystem:(long long)arg2 withQueueCompletion:(CDUnknownBlockType)arg3 sendBlock:(CDUnknownBlockType)arg4;	// IMP=0x00100000005a9200
- (void)clearQueueForSubsystem:(long long)arg1;	// IMP=0x00100000005a8fc0
- (void)removeFromQueue:(id)arg1 subsystem:(long long)arg2;	// IMP=0x00100000005a8f50
- (void)purgeCachedCertsForSubsystemMechanism:(long long)arg1;	// IMP=0x00100000005a8f20
- (void)cleanupValidationInfoForSubsystemMechanism:(long long)arg1;	// IMP=0x00100000005a8ef0
- (id)initWithPushHandler:(id)arg1 validationMessageSendBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000005a8dd0
- (id)initWithValidationMessageSendBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000005a8d10

@end
