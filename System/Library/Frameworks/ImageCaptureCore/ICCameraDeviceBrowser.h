//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface ICCameraDeviceBrowser : NSObject
{
    NSMutableArray *_devices;	// 8 = 0x8
    NSMutableArray *_browsers;	// 16 = 0x10
    NSMutableArray *_suspendedBrowsers;	// 24 = 0x18
    long long _numberOfBrowsingBrowsers;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_suspensionTimer;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_suspensionTimerQueue;	// 48 = 0x30
    id _ptpDevManager;	// 56 = 0x38
    id _msDevManager;	// 64 = 0x40
    id _rsDevManager;	// 72 = 0x48
}

+ (_Bool)exists;	// IMP=0x00600000000011ad
+ (id)defaultBrowser;	// IMP=0x0060000000001188
@property(readonly) NSMutableArray *browsers; // @synthesize browsers=_browsers;
- (id)deviceWithDelegate:(id)arg1;	// IMP=0x0000000000002b22
- (void)handleImageCaptureEventNotification:(id)arg1;	// IMP=0x000000000000269a
- (void)handleCommandCompletionNotification:(id)arg1;	// IMP=0x0000000000002640
@property(readonly) NSMutableArray *devices; // @synthesize devices=_devices;
- (void)stop:(id)arg1;	// IMP=0x0000000000002290
- (void)notifySuspension:(unsigned long long)arg1;	// IMP=0x0000000000002067
- (void)start:(id)arg1;	// IMP=0x0000000000001db7
- (_Bool)startRSCameraBrowser;	// IMP=0x0000000000001da9
- (_Bool)startMSCameraBrowser;	// IMP=0x0000000000001d9b
- (_Bool)startPTPCameraBrowser;	// IMP=0x0000000000001d8d
- (void)removeBrowser:(id)arg1;	// IMP=0x0000000000001d77
- (void)addBrowser:(id)arg1;	// IMP=0x0000000000001d61
- (void)dealloc;	// IMP=0x0000000000001cca
- (void)runSuspensionTimer:(_Bool)arg1;	// IMP=0x000000000000161f
- (id)init;	// IMP=0x00000000000011be

@end
