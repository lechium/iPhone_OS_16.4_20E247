//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VKARWalkingCameraController;

__attribute__((visibility("hidden")))
@interface VKARWalkingDebugGestureCameraBehavior
{
    VKARWalkingCameraController *_controller;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x000000000092eac7
- (void)updateRotate:(double)arg1 atScreenPoint:(struct CGPoint)arg2;	// IMP=0x000000000092e999
- (void)updateZoom:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;	// IMP=0x000000000092e993
- (void)updatePan:(struct CGPoint)arg1 lastScreenPoint:(struct CGPoint)arg2;	// IMP=0x000000000092e7fd
- (id)initWithCameraController:(id)arg1;	// IMP=0x000000000092e778

@end
