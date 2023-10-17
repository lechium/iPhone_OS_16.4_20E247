//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ESDContainer, ESDObject, ESDRoot, NSMutableArray, NSMutableDictionary, OITSUNoCopyDictionary, PBOfficeArtReaderState, PBOutlineBulletDictionary, PBSlideState, PDPresentation, PDSlideBase;
@protocol TCCancelDelegate;

__attribute__((visibility("hidden")))
@interface PBPresentationReaderState : NSObject
{
    void *mPptBinaryReader;	// 8 = 0x8
    PDPresentation *mTgtPresentation;	// 16 = 0x10
    ESDRoot *mDocumentRoot;	// 24 = 0x18
    ESDContainer *mSrcSlideListHolder;	// 32 = 0x20
    void *mCurrentSlideTextBlockRecordIndexRangeVector;	// 40 = 0x28
    unsigned int mSrcSlideId;	// 48 = 0x30
    NSMutableArray *mSlideIndexes;	// 56 = 0x38
    OITSUNoCopyDictionary *mSlideMasterToMasterStyles;	// 64 = 0x40
    struct __CFDictionary *mHyperlinkMap;	// 72 = 0x48
    PBOfficeArtReaderState *mOfficeArtState;	// 80 = 0x50
    NSMutableArray *mFontEntities;	// 88 = 0x58
    PDSlideBase *mTgtSlide;	// 96 = 0x60
    _Bool mHasCharacterPropertyBulletIndex;	// 104 = 0x68
    unsigned int mBulletIndex;	// 108 = 0x6c
    PBOutlineBulletDictionary *mPlaceholderBulletStyles;	// 112 = 0x70
    PBOutlineBulletDictionary *mPlaceholderMacCharStyles;	// 120 = 0x78
    ESDObject *mCurrentBulletStyle;	// 128 = 0x80
    ESDObject *mCurrentMacCharStyle;	// 136 = 0x88
    void *mSrcDocMasterStyleInfoVector;	// 144 = 0x90
    void *mSrcCurrentMasterStyleInfoVector;	// 152 = 0x98
    PBSlideState *mSlideState;	// 160 = 0xa0
    id <TCCancelDelegate> mCancel;	// 168 = 0xa8
    _Bool mHasSlideNumberPlaceholder;	// 176 = 0xb0
    NSMutableDictionary *mTargetShapeToSourceTextBoxContainerHolderMap;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x0000000000437be9
@property _Bool hasSlideNumberPlaceholder; // @synthesize hasSlideNumberPlaceholder=mHasSlideNumberPlaceholder;
@property(retain, nonatomic) id <TCCancelDelegate> cancelDelegate; // @synthesize cancelDelegate=mCancel;
@property(retain) ESDContainer *sourceSlideListHolder; // @synthesize sourceSlideListHolder=mSrcSlideListHolder;
- (void)setSourceTextBoxContainerHolder:(id)arg1 forTargetShape:(id)arg2;	// IMP=0x000000000002d432
- (id)sourceTextBoxContainerHolderForTargetShape:(id)arg1;	// IMP=0x0000000000037ce2
- (id)hyperlinkInfoWithId:(unsigned int)arg1 createIfAbsent:(_Bool)arg2;	// IMP=0x0000000000100505
- (_Bool)isCancelled;	// IMP=0x000000000001d75c
- (void)setSourceSlideId:(unsigned int)arg1;	// IMP=0x000000000003b8f3
- (void *)currentSlideTextBlockRecordIndexRangeVector;	// IMP=0x0000000000437bd9
- (struct PBReaderMasterStyleInfo *)currentSourceMasterStyleInfoOfType:(int)arg1;	// IMP=0x0000000000021ce7
- (struct PBReaderMasterStyleInfo *)docSourceMasterStyleInfoOfType:(int)arg1;	// IMP=0x0000000000017e71
- (void)setCurrentSourceMasterStyleInfoVector:(void *)arg1;	// IMP=0x0000000000021cd4
- (_Bool)hasCurrentSourceMasterStyleInfoVector;	// IMP=0x000000000002b043
- (void)resetSlideState;	// IMP=0x0000000000437bba
- (id)slideState;	// IMP=0x0000000000437ba9
- (id)masterStyles:(id)arg1;	// IMP=0x0000000000037173
- (void)setMasterStyles:(id)arg1 slideMaster:(id)arg2;	// IMP=0x00000000000238ec
- (void)setCurrentBulletStyle:(id)arg1 macCharStyle:(id)arg2;	// IMP=0x00000000000292e4
- (void)setCurrentTextType:(int)arg1 placeholderIndex:(unsigned int)arg2;	// IMP=0x00000000000a18f6
- (id)currentMacCharStyle;	// IMP=0x0000000000018fc5
- (id)currentBulletStyle;	// IMP=0x000000000002b054
- (void)setPlaceholderMacCharStyles:(id)arg1;	// IMP=0x00000000001cf6d3
- (void)setPlaceholderBulletStyles:(id)arg1;	// IMP=0x00000000001502f2
- (void)setBulletIndex:(unsigned int)arg1;	// IMP=0x0000000000018fe5
- (unsigned int)bulletIndex;	// IMP=0x0000000000437b9c
- (void)setHasCharacterPropertyBulletIndex:(_Bool)arg1;	// IMP=0x000000000002bd53
- (_Bool)hasCharacterPropertyBulletIndex;	// IMP=0x0000000000018fda
- (void)setTgtSlide:(id)arg1;	// IMP=0x0000000000027999
- (id)tgtSlide;	// IMP=0x000000000002bd8b
- (id)fontEntityAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000018ff6
- (void)addFontEntity:(id)arg1 charSet:(int)arg2 type:(int)arg3 family:(int)arg4;	// IMP=0x0000000000017a9e
- (unsigned long long)fontEntityCount;	// IMP=0x0000000000437b78
- (id)officeArtState;	// IMP=0x000000000001cbba
- (id)slideIndexesRef;	// IMP=0x0000000000437b5c
- (unsigned long long)getSlideIndexAt:(unsigned long long)arg1;	// IMP=0x0000000000437b00
- (void)addSlideIndex:(unsigned long long)arg1;	// IMP=0x0000000000437a98
- (unsigned long long)numberOfSlideIndexes;	// IMP=0x000000000002d662
- (id)tgtPresentation;	// IMP=0x0000000000017e94
- (void)setDocumentRoot:(id)arg1;	// IMP=0x00000000000175d3
- (id)documentRoot;	// IMP=0x000000000001bef5
- (void *)reader;	// IMP=0x000000000000c36b
- (void)dealloc;	// IMP=0x00000000000af495
- (id)initWithReader:(void *)arg1 tgtPresentation:(id)arg2;	// IMP=0x000000000000b984

@end
