//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSMutableDictionary, NSString;

@interface MSMSASServiceConnection : NSObject
{
    NSMutableDictionary *_foregroundPingTimerByPersonID;	// 8 = 0x8
    MISSING_TYPE *_XPCForegroundRequestByPersonID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000008fe7
@property(retain, nonatomic) NSMutableDictionary *XPCForegroundRequestByPersonID; // @synthesize XPCForegroundRequestByPersonID=_XPCForegroundRequestByPersonID;
@property(retain, nonatomic) NSMutableDictionary *foregroundPingTimerByPersonID; // @synthesize foregroundPingTimerByPersonID=_foregroundPingTimerByPersonID;
- (void)XPCNSServiceConnectionDidDisconnect:(id)arg1;	// IMP=0x0010000000008f28
- (void)XPCNSServiceConnection:(id)arg1 didReceiveRequest:(id)arg2 sequenceNumber:(unsigned long long)arg3;	// IMP=0x0010000000008ddc
- (void)_handleFocusAlbum:(id)arg1;	// IMP=0x0010000000008d00
- (void)_foregroundPingTimerDidExpire:(id)arg1;	// IMP=0x0010000000008b02
- (void)_handleForegroundPing:(id)arg1 request:(id)arg2;	// IMP=0x00100000000086ef
- (id)workQueue;	// IMP=0x00100000000086bf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
