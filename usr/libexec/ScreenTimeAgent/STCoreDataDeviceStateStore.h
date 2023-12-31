//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol STCoreDataDeviceStateReverseTransformer, STCoreDataDeviceStateTransformer, STCoreDataObserver, STDeviceStateChangeObserverDelegate;

@interface STCoreDataDeviceStateStore : NSObject
{
    id <STDeviceStateChangeObserverDelegate> delegate;	// 8 = 0x8
    id <STCoreDataObserver> _observer;	// 16 = 0x10
    id <STCoreDataDeviceStateTransformer> _transformer;	// 24 = 0x18
    id <STCoreDataDeviceStateReverseTransformer> _reverseTransformer;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000029b1f
@property(readonly) id <STCoreDataDeviceStateReverseTransformer> reverseTransformer; // @synthesize reverseTransformer=_reverseTransformer;
@property(readonly) id <STCoreDataDeviceStateTransformer> transformer; // @synthesize transformer=_transformer;
@property(readonly) id <STCoreDataObserver> observer; // @synthesize observer=_observer;
@property __weak id <STDeviceStateChangeObserverDelegate> delegate; // @synthesize delegate;
- (void)observer:(id)arg1 didObserveCoreDataChanges:(id)arg2;	// IMP=0x001000000002998d
- (id)writeDeviceStateChange:(id)arg1;	// IMP=0x001000000002990a
- (id)readDeviceStateChangeForLocalDevice;	// IMP=0x00100000000298ba
- (id)initWithObserver:(id)arg1 transformer:(id)arg2 reverseTransformer:(id)arg3;	// IMP=0x00100000000297a2

@end

