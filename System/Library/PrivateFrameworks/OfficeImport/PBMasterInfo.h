//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, PDSlideMaster;

__attribute__((visibility("hidden")))
@interface PBMasterInfo : NSObject
{
    PDSlideMaster *mSlideMaster;	// 8 = 0x8
    NSMutableArray *mTgtSlideLayoutArray;	// 16 = 0x10
    unsigned int mMainPbRef;	// 24 = 0x18
    unsigned int mTitlePbRef;	// 28 = 0x1c
    NSDictionary *mLayoutMap;	// 32 = 0x20
    void *mSrcTextStyling;	// 40 = 0x28
    unsigned int mXmlMainMasterId;	// 48 = 0x30
    NSMutableDictionary *mXmlLayoutMap;	// 56 = 0x38
    _Bool mUseXmlBlobs;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000433f52
@property(nonatomic) _Bool useXmlBlobs; // @synthesize useXmlBlobs=mUseXmlBlobs;
@property(nonatomic) unsigned int xmlMainMasterId; // @synthesize xmlMainMasterId=mXmlMainMasterId;
- (id)uniqueXmlSlideLayout;	// IMP=0x0000000000433e81
- (id)slideLayoutForXmlLayoutId:(unsigned short)arg1;	// IMP=0x0000000000433e06
- (void)setSlideLayout:(id)arg1 forXmlLayoutId:(unsigned short)arg2;	// IMP=0x0000000000433d6e
- (void *)sourceTextStyling;	// IMP=0x0000000000021cc4
- (id)slideLayoutForSlideHolder:(id)arg1;	// IMP=0x000000000003b9ac
- (void)cacheSlideLayouts;	// IMP=0x0000000000038a2e
- (id)allTargetLayoutTypes;	// IMP=0x00000000000374b0
- (void)cacheTargetLayoutType:(int)arg1;	// IMP=0x0000000000035195
- (unsigned int)titlePbRef;	// IMP=0x0000000000433bac
- (void)setTitlePbRef:(unsigned int)arg1;	// IMP=0x0000000000100a33
- (unsigned int)mainPbRef;	// IMP=0x0000000000433b9a
- (void)setMainPbRef:(unsigned int)arg1;	// IMP=0x0000000000021c21
- (id)slideMaster;	// IMP=0x0000000000037163
- (void)setSlideMaster:(id)arg1;	// IMP=0x0000000000021c02
- (void)dealloc;	// IMP=0x00000000000aff63
- (id)init;	// IMP=0x0000000000021b31

@end

