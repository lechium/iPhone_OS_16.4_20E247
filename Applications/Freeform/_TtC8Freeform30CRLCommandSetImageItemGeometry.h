//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRLCanvasInfoGeometry, CRLPathSource, MISSING_TYPE, NSUUID;

@interface _TtC8Freeform30CRLCommandSetImageItemGeometry
{
    MISSING_TYPE *id;	// 1094999903 = 0x41445f5f
    MISSING_TYPE *imageGeometry;	// 1414745679 = 0x54534e4f
    MISSING_TYPE *maskGeometry;	// 17967520 = 0x11229a0
    MISSING_TYPE *maskPathSource;	// 11688 = 0x2da8
}

- (void).cxx_destruct;	// IMP=0x004000000074cdb0
- (id)init;	// IMP=0x001000000074ccf0
- (id)initWithImageItem:(id)arg1 imageGeometry:(id)arg2 maskGeometry:(id)arg3 maskPathSource:(id)arg4;	// IMP=0x001000000074ca40
- (id)initWithId:(id)arg1 imageGeometry:(id)arg2 maskGeometry:(id)arg3 maskPathSource:(id)arg4;	// IMP=0x001000000074c880
@property(nonatomic, readonly) CRLPathSource *maskPathSource; // @synthesize maskPathSource;
@property(nonatomic, readonly) CRLCanvasInfoGeometry *maskGeometry; // @synthesize maskGeometry;
@property(nonatomic, readonly) CRLCanvasInfoGeometry *imageGeometry; // @synthesize imageGeometry;
@property(nonatomic, readonly) NSUUID *id;

@end
