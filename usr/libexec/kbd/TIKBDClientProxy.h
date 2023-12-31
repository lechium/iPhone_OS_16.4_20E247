//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;

@interface TIKBDClientProxy : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
}

+ (id)KBDClientProxyWithConnection:(id)arg1;	// IMP=0x002000000000b5ec
- (void).cxx_destruct;	// IMP=0x002000000000b7b5
@property(readonly, nonatomic) __weak NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)closeRequestToken:(id)arg1;	// IMP=0x001000000000b799
- (void)pushCandidates:(id)arg1 requestToken:(id)arg2;	// IMP=0x001000000000b6bd
- (void)invalidate;	// IMP=0x001000000000b6ad
- (id)initWithConnection:(id)arg1;	// IMP=0x001000000000b649
- (id)init;	// IMP=0x001000000000b635

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

