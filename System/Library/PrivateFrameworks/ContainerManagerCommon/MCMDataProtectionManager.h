//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MCMDataProtectionManager : NSObject
{
    NSObject<OS_dispatch_queue> *_protectionOperationFileQueue;	// 8 = 0x8
}

+ (id)defaultManager;	// IMP=0x0060000000082f74
- (void).cxx_destruct;	// IMP=0x0000000000082400
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *protectionOperationFileQueue; // @synthesize protectionOperationFileQueue=_protectionOperationFileQueue;
- (int)desiredDataProtectionClassForMetadata:(id)arg1 clientIdentity:(id)arg2;	// IMP=0x0000000000082242
- (int)intendedDataProtectionClassBasedOnEntitlementsForIdentifier:(id)arg1 clientIdentity:(id)arg2 containerClass:(unsigned long long)arg3 info:(id)arg4;	// IMP=0x0000000000081fd7
- (void)setDataProtectionOnDataContainerForMetadata:(id)arg1 isSecondOrThirdPartyApp:(_Bool)arg2 retryIfLocked:(_Bool)arg3 deferUntilNextLaunch:(_Bool)arg4 withCompletion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000081770
- (_Bool)restartPendingDataProtectionOperationsWithError:(id *)arg1;	// IMP=0x0000000000080c45
- (void)_startDataProtectionChangeOperation:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000080964
- (id)init;	// IMP=0x00000000000808bf

@end
