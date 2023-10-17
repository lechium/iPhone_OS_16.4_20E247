//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSMutableDictionary, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface CMArchiveManager : NSObject
{
    _Bool mIsThumbnail;	// 8 = 0x8
    _Bool mIsOnPhone;	// 9 = 0x9
    unsigned long long mPageCount;	// 16 = 0x10
    NSString *mPassphrase;	// 24 = 0x18
    NSMutableDictionary *mDrawableCache;	// 32 = 0x20
    NSString *mResourcePathPrefix;	// 40 = 0x28
    NSMutableSet *mPausedPaths;	// 48 = 0x30
    int mHeight;	// 56 = 0x38
    int mWidth;	// 60 = 0x3c
    double mCommitInterval;	// 64 = 0x40
    _Bool mAutoCommit;	// 72 = 0x48
    NSCache *mStyleObjectCache;	// 80 = 0x50
    _Bool _noDecorations;	// 88 = 0x58
}

+ (id)resourceTypeToExtension:(int)arg1;	// IMP=0x00100000000aeb50
+ (id)resourceTypeToMIME:(int)arg1;	// IMP=0x001000000045b172
+ (int)blipTypeToResourceType:(int)arg1;	// IMP=0x00100000000ae878
- (void).cxx_destruct;	// IMP=0x000000000045b1bd
@property _Bool noDecorations; // @synthesize noDecorations=_noDecorations;
@property(copy) NSString *passphrase; // @synthesize passphrase=mPassphrase;
- (_Bool)isCancelled;	// IMP=0x000000000045b16a
- (void)setHTMLWidth:(int)arg1;	// IMP=0x0000000000039d22
- (void)setHTMLHeight:(int)arg1;	// IMP=0x0000000000039d2b
- (_Bool)isProgressive;	// IMP=0x000000000045b162
- (unsigned long long)pageCount;	// IMP=0x000000000045b158
- (void)setPageCount:(unsigned long long)arg1;	// IMP=0x0000000000038ffe
- (_Bool)isThumbnail;	// IMP=0x00000000000036dc
- (void)setIsThumbnail:(_Bool)arg1;	// IMP=0x000000000045b14f
- (id)appendResourcePathToName:(id)arg1;	// IMP=0x000000000045b0e1
- (id)resourcePathPrefix;	// IMP=0x000000000045b0d3
- (void)setResourcePathPrefix:(id)arg1;	// IMP=0x000000000045b0c2
- (id)cssStylesheetString;	// IMP=0x000000000045b0ba
- (void)addCssStyle:(id)arg1 withName:(id)arg2;	// IMP=0x000000000045b0b4
- (id)addCssStyle:(id)arg1;	// IMP=0x000000000045b0ac
- (id)addStyle:(id)arg1;	// IMP=0x000000000045afa4
- (unsigned long long)resourceCount;	// IMP=0x000000000045af9c
- (_Bool)isOnPhone;	// IMP=0x00000000000e8c88
- (void)setIsOnPhone:(_Bool)arg1;	// IMP=0x0000000000001845
- (_Bool)progressiveMappingIsPausedOnPath:(id)arg1;	// IMP=0x000000000003abac
- (void)restartProgressiveMappingOnPath:(id)arg1;	// IMP=0x00000000000efdfc
- (void)pauseProgressiveMappingOnPath:(id)arg1;	// IMP=0x00000000000ed843
- (id)cachedPathForDrawable:(id)arg1;	// IMP=0x00000000000ae12a
- (id)addResourceForDrawable:(id)arg1 withType:(int)arg2 drawable:(id)arg3;	// IMP=0x00000000000ae895
- (id)addResource:(id)arg1 withName:(id)arg2 type:(int)arg3;	// IMP=0x000000000045aeec
- (id)addResource:(id)arg1 withType:(int)arg2;	// IMP=0x00000000000ae9dd
- (id)_validateData:(id)arg1 withType:(int *)arg2;	// IMP=0x00000000000aea88
- (void)setAutoCommit:(_Bool)arg1;	// IMP=0x0000000000001b50
- (void)setCommitInterval:(double)arg1;	// IMP=0x000000000045aee1
- (void)commitDataAtPath:(id)arg1;	// IMP=0x000000000045aedb
- (void)closeResourceAtPath:(id)arg1;	// IMP=0x000000000045aed5
- (void)pushCssToPath:(id)arg1;	// IMP=0x000000000045aecf
- (void)pushText:(id)arg1 toPath:(id)arg2;	// IMP=0x000000000045aec9
- (void)pushData:(id)arg1 toPath:(id)arg2;	// IMP=0x000000000045aec3
- (id)copyResourceWithType:(int)arg1;	// IMP=0x00000000000aea9e
- (id)copyResourceWithName:(id)arg1 type:(int)arg2;	// IMP=0x000000000045aebb
- (id)init;	// IMP=0x000000000000175f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
