//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TSSIMSetupFlow, UINavigationController;
@protocol PSUILocalConvertModelDelegate;

__attribute__((visibility("hidden")))
@interface ConvertToESIMSpecifierCache : NSObject
{
    _Bool _isViewControllerPopNeeded;	// 8 = 0x8
    id <PSUILocalConvertModelDelegate> _delegate;	// 16 = 0x10
    TSSIMSetupFlow *_flow;	// 24 = 0x18
    UINavigationController *_navigationController;	// 32 = 0x20
    NSString *_iccid;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000729e4
@property(retain) NSString *iccid; // @synthesize iccid=_iccid;
@property _Bool isViewControllerPopNeeded; // @synthesize isViewControllerPopNeeded=_isViewControllerPopNeeded;
@property __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain) TSSIMSetupFlow *flow; // @synthesize flow=_flow;
@property(retain) id <PSUILocalConvertModelDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getLogger;	// IMP=0x0000000000072920
- (void)simSetupFlowCompleted:(unsigned long long)arg1;	// IMP=0x00000000000725f2
- (void)dealloc;	// IMP=0x00000000000724f5
- (id)initWithDelegate:(id)arg1 isViewControllerPopNeeded:(_Bool)arg2 odcFlow:(id)arg3 delegate:(id)arg4 iccid:(id)arg5;	// IMP=0x000000000007239e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

