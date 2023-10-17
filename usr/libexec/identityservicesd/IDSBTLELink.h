//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSData, NSString, NSUUID;
@protocol IDSLinkDelegate, IDSWPPacketSendingProtocol;

@interface IDSBTLELink : NSObject
{
    NSString *_cbuuid;	// 8 = 0x8
    NSString *_deviceUniqueID;	// 16 = 0x10
    NSString *_linkID;	// 24 = 0x18
    NSUUID *_peerID;	// 32 = 0x20
    id <IDSWPPacketSendingProtocol> _wpLinkManager;	// 40 = 0x28
    CDStruct_dc2926a3 *_incomingPacketBuffer;	// 48 = 0x30
    unsigned long long _state;	// 56 = 0x38
    unsigned long long _totalBytesSent;	// 64 = 0x40
    unsigned long long _totalPacketsSent;	// 72 = 0x48
    unsigned long long _totalBytesReceived;	// 80 = 0x50
    unsigned long long _totalPacketsReceived;	// 88 = 0x58
    unsigned long long _previousBytesSent;	// 96 = 0x60
    unsigned long long _previousPacketsSent;	// 104 = 0x68
    unsigned long long _previousBytesReceived;	// 112 = 0x70
    unsigned long long _previousPacketsReceived;	// 120 = 0x78
    double _previousReportTime;	// 128 = 0x80
    _Bool _hasSpaceAvailable;	// 136 = 0x88
    _Bool _shouldSendHasSpaceAvailable;	// 137 = 0x89
    NSData *_outgoingData;	// 144 = 0x90
    id <IDSLinkDelegate> _delegate;	// 152 = 0x98
    id <IDSLinkDelegate> _alternateDelegate;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x00200000001a26c0
@property __weak id <IDSLinkDelegate> alternateDelegate; // @synthesize alternateDelegate=_alternateDelegate;
@property __weak id <IDSLinkDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSString *deviceUniqueID; // @synthesize deviceUniqueID=_deviceUniqueID;
@property(retain) NSString *cbuuid; // @synthesize cbuuid=_cbuuid;
@property(readonly) NSString *linkID; // @synthesize linkID=_linkID;
@property(readonly) unsigned long long state; // @synthesize state=_state;
- (id)generateLinkReport:(double)arg1 isCurrentLink:(_Bool)arg2;	// IMP=0x00100000001a2090
- (MISSING_TYPE *)_didReceiveData: /* Error: Ran out of types for this method. */;	// IMP=0x00100000001a10e0
- (void)didReceiveData:(id)arg1;	// IMP=0x00100000001a0fd0
- (void)setHasSpaceAvailable:(_Bool)arg1;	// IMP=0x00100000001a0bf0
- (unsigned long long)sendPacketBufferArray:(struct **)arg1 arraySize:(int)arg2 toDeviceUniqueID:(id)arg3 cbuuid:(id)arg4;	// IMP=0x00100000001a0b70
- (unsigned long long)sendPacketBuffer:(CDStruct_dc2926a3 *)arg1 toDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;	// IMP=0x00100000001a0810
- (id)copyLinkStatsDict;	// IMP=0x00100000001a06b0
@property(readonly, getter=linkTypeString) NSString *linkTypeString;
@property(readonly) unsigned long long headerOverhead;
- (void)start;	// IMP=0x00100000001a05f0
- (void)triggerBTCorruptionRecovery;	// IMP=0x00100000001a05c0
- (void)_localDetectedCorruption;	// IMP=0x00100000001a05b0
- (void)dealloc;	// IMP=0x00100000001a0540
- (id)initWithWPLinkManager:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x00100000001a03c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
