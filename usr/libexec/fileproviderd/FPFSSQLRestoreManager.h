//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FPDRTCReportingSession, _TtC9libfssync20FPFSSQLRestoreEngine;

@interface FPFSSQLRestoreManager : NSObject
{
    FPDRTCReportingSession *_rtcReporting;	// 8 = 0x8
    _TtC9libfssync20FPFSSQLRestoreEngine *_restoreEngine;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000009103
@property(retain, nonatomic) _TtC9libfssync20FPFSSQLRestoreEngine *restoreEngine; // @synthesize restoreEngine=_restoreEngine;
@property(readonly, nonatomic) FPDRTCReportingSession *rtcReporting; // @synthesize rtcReporting=_rtcReporting;
- (void)reportCompletionTelemetryWithError:(id)arg1 atStep:(id)arg2;	// IMP=0x0010000000008f50
- (void)restoreWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000008e17
- (id)initWithUserURL:(id)arg1;	// IMP=0x0010000000008d32

@end

