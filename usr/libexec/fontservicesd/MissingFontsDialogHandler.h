//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FontServicesDaemon, NSString, NSXPCListener;

@interface MissingFontsDialogHandler : NSObject
{
    FontServicesDaemon *_daemon;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
    NSXPCListener *_listener;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000000c4d4
@property(retain) NSXPCListener *listener; // @synthesize listener=_listener;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) FontServicesDaemon *daemon; // @synthesize daemon=_daemon;
- (void)showDialogWithUserInfo:(id)arg1;	// IMP=0x001000000000c2e8
- (void)doneWithMissingFonts:(id)arg1;	// IMP=0x001000000000c2a7
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000000c209
- (id)initWithFontServicesDaemon:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000c166

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
