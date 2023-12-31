//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class OADRotation3D;

__attribute__((visibility("hidden")))
@interface OADCamera : NSObject
{
    OADRotation3D *mRotation;	// 8 = 0x8
    int mCameraType;	// 16 = 0x10
    float mFieldOfView;	// 20 = 0x14
    float mZoom;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000003189c0
- (id)description;	// IMP=0x0000000000318982
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000031882b
- (unsigned long long)hash;	// IMP=0x00000000003187b6
- (void)setZoom:(float)arg1;	// IMP=0x00000000003187ab
- (float)zoom;	// IMP=0x00000000003187a0
- (void)setFieldOfView:(float)arg1;	// IMP=0x00000000001dc7e9
- (float)fieldOfView;	// IMP=0x0000000000318795
- (void)setCameraType:(int)arg1;	// IMP=0x00000000001dc7e0
- (int)cameraType;	// IMP=0x000000000031878c
- (void)setRotation:(id)arg1;	// IMP=0x00000000001dc730
- (id)rotation;	// IMP=0x000000000031877e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003186e5
- (id)init;	// IMP=0x00000000001dc59f

@end

