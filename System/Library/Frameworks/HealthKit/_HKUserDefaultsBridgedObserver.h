//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKObserverBridgeHandle;

__attribute__((visibility("hidden")))
@interface _HKUserDefaultsBridgedObserver : NSObject
{
    HKObserverBridgeHandle *_handle;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000151c30
@property(readonly, nonatomic) HKObserverBridgeHandle *handle; // @synthesize handle=_handle;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000151b22
- (id)initWithHandle:(id)arg1;	// IMP=0x0000000000151ab7

@end
