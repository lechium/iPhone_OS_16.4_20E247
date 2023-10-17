//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class COCapabilityManager, NSString;

__attribute__((visibility("hidden")))
@interface COCapabilityManagerClientInterfaceMediator : NSObject
{
    COCapabilityManager *_manager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000023d4c
@property(readonly, nonatomic) __weak COCapabilityManager *manager; // @synthesize manager=_manager;
- (void)availabilityChanged:(_Bool)arg1 ofCapability:(id)arg2 inCluster:(id)arg3;	// IMP=0x0000000000023caf
- (id)initWithCapabilityManager:(id)arg1;	// IMP=0x0000000000023c4b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
