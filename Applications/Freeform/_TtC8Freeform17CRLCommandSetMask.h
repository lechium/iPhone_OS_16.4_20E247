//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRLMaskInfo, MISSING_TYPE, NSUUID;

@interface _TtC8Freeform17CRLCommandSetMask
{
    MISSING_TYPE *id;	// 6059600 = 0x5c7650
    MISSING_TYPE *maskInfo;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x004000000099ec10
- (id)init;	// IMP=0x001000000099eb70
- (id)initWithImageItem:(id)arg1 maskGeometry:(id)arg2 maskPath:(id)arg3;	// IMP=0x001000000099e9c0
- (id)initWithImageItem:(id)arg1 maskInfo:(id)arg2;	// IMP=0x001000000099e7b0
- (id)initWithId:(id)arg1 maskInfo:(id)arg2;	// IMP=0x001000000099e6d0
@property(nonatomic, readonly) CRLMaskInfo *maskInfo; // @synthesize maskInfo;
@property(nonatomic, readonly) NSUUID *id;

@end

