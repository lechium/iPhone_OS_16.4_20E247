//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface DataActivationPopupAssertion : NSObject
{
    struct __CTServerConnection *_telephonyServerConnection;	// 8 = 0x8
    void *_dataActivationPopupAssertion;	// 16 = 0x10
    _Bool _active;	// 24 = 0x18
}

- (void)invalidate;	// IMP=0x0020000000ab07d3
- (void)_releaseAssertion;	// IMP=0x0010000000ab0797
- (void)_takeAssertion;	// IMP=0x0010000000ab0719
- (void)dealloc;	// IMP=0x0010000000ab06db
- (id)init;	// IMP=0x0010000000ab06c4
- (id)initAndTakeAssertion:(_Bool)arg1;	// IMP=0x0010000000ab0656

@end

