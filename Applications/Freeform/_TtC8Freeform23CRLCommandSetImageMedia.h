//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSUUID, _TtC8Freeform8CRLAsset;

@interface _TtC8Freeform23CRLCommandSetImageMedia
{
    MISSING_TYPE *id;	// 1094999903 = 0x41445f5f
    MISSING_TYPE *imageData;	// 0 = 0x0
    MISSING_TYPE *thumbnailData;	// 18006016 = 0x112c000
}

- (void).cxx_destruct;	// IMP=0x0040000000812c00
- (id)init;	// IMP=0x0010000000812b50
- (id)initWithImageItem:(id)arg1 imageData:(id)arg2 thumbnailData:(id)arg3;	// IMP=0x0010000000812900
- (id)initWithId:(id)arg1 imageData:(id)arg2 thumbnailData:(id)arg3;	// IMP=0x00100000008127e0
@property(nonatomic, readonly) _TtC8Freeform8CRLAsset *thumbnailData; // @synthesize thumbnailData;
@property(nonatomic, readonly) _TtC8Freeform8CRLAsset *imageData; // @synthesize imageData;
@property(nonatomic, readonly) NSUUID *id;

@end

