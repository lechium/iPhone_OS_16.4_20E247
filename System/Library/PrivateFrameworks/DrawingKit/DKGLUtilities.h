//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface DKGLUtilities : NSObject
{
}

+ (void)setCurrentClearColor;	// IMP=0x0080000000013e7b
+ (_Bool)gpuAvailable;	// IMP=0x0080000000013e6d
+ (void)_postGLInactiveNotification;	// IMP=0x0080000000013e34
+ (void)_postGLActiveNotification;	// IMP=0x0080000000013e26
+ (_Bool)setCurrentGLContext:(id)arg1;	// IMP=0x0080000000013e0d
+ (void)createSharedRepeatableTexture:(unsigned int *)arg1 withImageName:(id)arg2 ofType:(id)arg3;	// IMP=0x0080000000013c35
+ (void)teardownSharedGLContext;	// IMP=0x0080000000013bd4
+ (id)createSharedGLContext;	// IMP=0x0080000000013acf
+ (id)createPlatformGLContext;	// IMP=0x0080000000013aa1
+ (id)snapshotImageOfFrameBufferWithID:(unsigned int)arg1 bufferSize:(struct CGSize)arg2 displayScale:(double)arg3;	// IMP=0x0080000000013887
+ (void)translateMatrix:(CDStruct_f1db2b5e *)arg1 byX:(float)arg2 Y:(float)arg3 result:(CDStruct_f1db2b5e *)arg4;	// IMP=0x0080000000013783
+ (void)setProjectionMatrixForWidth:(float)arg1 height:(float)arg2 flipped:(_Bool)arg3 matrix:(CDStruct_f1db2b5e *)arg4;	// IMP=0x008000000001363b
+ (void)drawQuadAtX:(float)arg1 Y:(float)arg2 width:(float)arg3 height:(float)arg4;	// IMP=0x00800000000134bf
+ (void)deleteTexture:(unsigned int *)arg1;	// IMP=0x0080000000013497
+ (void)createRepeatableTexture:(unsigned int *)arg1 withImageName:(id)arg2 ofType:(id)arg3;	// IMP=0x00800000000133b6
+ (void)createTexture:(unsigned int *)arg1 withImageName:(id)arg2 ofType:(id)arg3;	// IMP=0x00800000000131ca
+ (void)deleteVBO:(unsigned int *)arg1;	// IMP=0x00800000000131a2
+ (void)createVBO:(unsigned int *)arg1 size:(long long)arg2 data:(void *)arg3 usage:(unsigned int)arg4;	// IMP=0x0080000000013157
+ (void)deleteFBO:(unsigned int *)arg1 depthRB:(unsigned int *)arg2 texture:(unsigned int *)arg3;	// IMP=0x00800000000130ef
+ (void)createFBO:(unsigned int *)arg1 depthRB:(unsigned int *)arg2 texture:(unsigned int *)arg3 width:(int)arg4 height:(int)arg5 format:(unsigned int)arg6;	// IMP=0x0080000000012f43
+ (unsigned int)compileShader:(id)arg1 ofType:(id)arg2;	// IMP=0x0080000000012d41
+ (id)pathForResource:(id)arg1 ofType:(id)arg2;	// IMP=0x0080000000012c92
+ (void)initialize;	// IMP=0x0080000000012ab6

@end

