//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEODaemonToMapsPushDaemonListener, NSString, _TtC8MapsSync32MapsSyncAnalyticsIdentifierQuery;
@protocol NotificationFromGEODHandlerDelegate;

@interface NotificationFromGEODHandler : NSObject
{
    long long _lastProxyAuthReason;	// 8 = 0x8
    double _lastProxyAuthEvent;	// 16 = 0x10
    long long _lastInternalErrorCode;	// 24 = 0x18
    double _lastInternalErrorTime;	// 32 = 0x20
    GEODaemonToMapsPushDaemonListener *_geodListener;	// 40 = 0x28
    _TtC8MapsSync32MapsSyncAnalyticsIdentifierQuery *_query;	// 48 = 0x30
    id <NotificationFromGEODHandlerDelegate> _delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00100000000183ff
@property(nonatomic) __weak id <NotificationFromGEODHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)resume;	// IMP=0x00100000000183c2
- (id)initWithDelegate:(id)arg1;	// IMP=0x00100000000182ff
- (void)deleteSyncedAnalyticsIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000018c90
- (void)setSyncedAnalyticsIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000189eb
- (void)fetchSyncedAnalyticsIdentifierWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000018582
- (void)pingWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000018570
- (void)geoDInternalError:(long long)arg1;	// IMP=0x00100000000184d0
- (void)proxyAuthFailed:(long long)arg1;	// IMP=0x0010000000018430

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

