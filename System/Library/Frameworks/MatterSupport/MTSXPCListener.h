//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString, NSXPCListener;
@protocol MTSXPCListenerDelegate;

__attribute__((visibility("hidden")))
@interface MTSXPCListener : HMFObject
{
    id <MTSXPCListenerDelegate> _delegate;	// 8 = 0x8
    NSXPCListener *_xpcListener;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002a8e9
@property(readonly) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
@property __weak id <MTSXPCListenerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000000002a807
- (void)start;	// IMP=0x000000000002a783
- (id)initWithXPCListener:(id)arg1;	// IMP=0x000000000002a704

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
