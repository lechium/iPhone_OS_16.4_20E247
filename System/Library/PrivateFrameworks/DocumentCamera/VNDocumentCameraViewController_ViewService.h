//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VNDocumentCameraViewController.h"

@class BKSAccelerometer, DCDocumentCameraRemoteViewController, DCDocumentCameraViewServiceSession, NSString;
@protocol DCDocumentCameraViewServiceViewController;

__attribute__((visibility("hidden")))
@interface VNDocumentCameraViewController_ViewService : VNDocumentCameraViewController
{
    DCDocumentCameraViewServiceSession *_viewServiceSession;	// 8 = 0x8
    BKSAccelerometer *_accelerometer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000036f11
@property(retain, nonatomic) BKSAccelerometer *accelerometer; // @synthesize accelerometer=_accelerometer;
@property(retain, nonatomic) DCDocumentCameraViewServiceSession *viewServiceSession; // @synthesize viewServiceSession=_viewServiceSession;
- (void)removeSaveActionBlockerForFiles;	// IMP=0x0000000000036e8a
- (void)didFailWithError:(id)arg1;	// IMP=0x0000000000036de0
- (void)didFinishWithDocumentInfoCollection:(id)arg1;	// IMP=0x0000000000036cb3
- (void)didCancel;	// IMP=0x0000000000036b85
- (void)dismiss;	// IMP=0x0000000000036b05
- (void)viewServicePreferredSizeDidChange:(struct CGSize)arg1;	// IMP=0x0000000000036af3
@property(readonly, nonatomic, getter=remoteViewController) DCDocumentCameraRemoteViewController *remoteViewController;
@property(readonly, nonatomic, getter=viewServiceViewController) id <DCDocumentCameraViewServiceViewController> viewServiceViewController;
- (id)castedChildViewController;	// IMP=0x00000000000369ef
- (void)viewDidLoad;	// IMP=0x0000000000036495
- (void)accelerometer:(id)arg1 didChangeDeviceOrientation:(long long)arg2;	// IMP=0x0000000000036444
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;	// IMP=0x000000000003643e
- (void)dealloc;	// IMP=0x000000000003636d
- (id)init;	// IMP=0x000000000003631d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

