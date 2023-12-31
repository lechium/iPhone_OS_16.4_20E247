//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCRateController, NSString;
@protocol VCMediaStreamRateAdaptationDelegate;

__attribute__((visibility("hidden")))
@interface VCMediaStreamRateAdaptation : NSObject
{
    AVCRateController *_rateController;	// 8 = 0x8
    struct OpaqueFigCFWeakReference *_delegateWeak;	// 16 = 0x10
    id <VCMediaStreamRateAdaptationDelegate> _delegate;	// 24 = 0x18
    int _mode;	// 32 = 0x20
}

- (void)rateController:(id)arg1 targetBitrateDidChange:(unsigned int)arg2 rateChangeCounter:(unsigned int)arg3;	// IMP=0x00000000003a1d3b
- (_Bool)updateRateControlWithNetworkNotification:(struct ifnet_interface_advisory *)arg1;	// IMP=0x00000000003a1d05
- (_Bool)stop;	// IMP=0x00000000003a1ccf
- (_Bool)start;	// IMP=0x00000000003a1c51
- (void)configureRateControllerWithConfig:(struct tagVCMediaStreamRateAdaptationConfig *)arg1;	// IMP=0x00000000003a1b01
- (void)dealloc;	// IMP=0x00000000003a1a98
- (id)initWithDelegate:(id)arg1 params:(struct tagVCMediaStreamRateAdaptationParams)arg2;	// IMP=0x00000000003a1936

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

