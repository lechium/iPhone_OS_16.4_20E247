//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSValue.h>

__attribute__((visibility("hidden")))
@interface SCNJSValue : NSValue
{
}

+ (id)SCNJSExportProtocol;	// IMP=0x00800000002b870f
+ (id)valueWithMatrix4:(struct SCNMatrix4)arg1;	// IMP=0x00800000002b8697
+ (id)valueWithVector4:(struct SCNVector4)arg1;	// IMP=0x00800000002b867e
+ (id)valueWithVector3:(struct SCNVector3)arg1;	// IMP=0x00800000002b8665
- (struct SCNMatrix4)matrix4;	// IMP=0x00000000002b86d4
- (struct SCNVector4)vector4;	// IMP=0x00000000002b86c2
- (struct SCNVector3)vector3;	// IMP=0x00000000002b86b0

@end

