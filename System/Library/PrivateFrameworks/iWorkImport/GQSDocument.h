//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GQDRoot, GQDSStylesheet, GQPProcessor, GQSTable, NSString, SFUZipArchive;
@protocol GQUOutputBundle, GQWrapPointGenerator;

@interface GQSDocument : NSObject
{
    GQPProcessor *mProcessor;	// 8 = 0x8
    GQDRoot *mRoot;	// 16 = 0x10
    struct __CFURL *mBundleUrl;	// 24 = 0x18
    SFUZipArchive *mArchive;	// 32 = 0x20
    id <GQUOutputBundle> mOutputBundle;	// 40 = 0x28
    struct __CFArray *mObjectStack;	// 48 = 0x30
    id mGeneratorState;	// 56 = 0x38
    GQSTable *mTableState;	// 64 = 0x40
    Class mCurrentDrawablesGenerator;	// 72 = 0x48
    Class mCurrentTableGenerator;	// 80 = 0x50
    id <GQWrapPointGenerator> mCurrentWrapPointGenerator;	// 88 = 0x58
    _Bool mMustRegisterDrawables;	// 96 = 0x60
    _Bool mGeneratorBeginWasCalled;	// 97 = 0x61
    _Bool mShouldStreamTables;	// 98 = 0x62
    _Bool mDoExternalTextWrap;	// 99 = 0x63
    _Bool mGeneratingThumbnail;	// 100 = 0x64
    _Bool mThumbnailGenerationDone;	// 101 = 0x65
    unsigned int mTextScale;	// 104 = 0x68
    void *mWrapPoints;	// 112 = 0x70
    struct __CFDictionary *mBundleResourceUriMap;	// 120 = 0x78
    GQDSStylesheet *mStylesheet;	// 128 = 0x80
    _Bool mIsReadingStorageAttachments;	// 136 = 0x88
    struct __CFString *mFilename;	// 144 = 0x90
    struct __CFURL *mDocumentUrl;	// 152 = 0x98
    _Bool _doCalculateThumbnailSize;	// 160 = 0xa0
}

@property(nonatomic) _Bool doCalculateThumbnailSize; // @synthesize doCalculateThumbnailSize=_doCalculateThumbnailSize;
- (struct __CFString *)filename;	// IMP=0x0000000000044535
- (_Bool)isReadingStorageAttachments;	// IMP=0x0000000000044529
- (void)setIsReadingStorageAttachments:(_Bool)arg1;	// IMP=0x000000000004451d
- (void)setStylesheet:(id)arg1;	// IMP=0x00000000000444ee
- (id)stylesheet;	// IMP=0x00000000000444e1
- (void)setCurrentWrapPointGenerator:(id)arg1;	// IMP=0x00000000000444d7
- (id)currentWrapPointGenerator;	// IMP=0x00000000000444cd
- (struct __CFString *)uriForBundleResource:(struct __CFString *)arg1 ofType:(struct __CFString *)arg2;	// IMP=0x0000000000044354
- (void)clearWrapPoints;	// IMP=0x000000000004432a
- (void *)createListOfWrapPointsAlongY:(float)arg1 minX:(float)arg2 maxX:(float)arg3 zIndex:(int)arg4;	// IMP=0x0000000000044198
- (const void *)wrapPoints;	// IMP=0x000000000004418e
- (void)addWrapPoint:(id)arg1;	// IMP=0x000000000004412f
- (void)setThumbnailGenerationDone:(_Bool)arg1;	// IMP=0x0000000000044126
- (_Bool)isThumbnailGenerationDone;	// IMP=0x000000000004411d
- (void)setGeneratingThumbnail:(_Bool)arg1;	// IMP=0x0000000000044114
- (_Bool)isGeneratingThumbnail;	// IMP=0x000000000004410b
- (void)setGeneratorBeginWasCalled;	// IMP=0x0000000000044101
- (_Bool)generatorBeginWasCalled;	// IMP=0x00000000000440f8
- (void)setDoExternalTextWrap:(_Bool)arg1;	// IMP=0x00000000000440ef
- (_Bool)doExternalTextWrap;	// IMP=0x00000000000440e6
- (void)setShouldStreamTables:(_Bool)arg1;	// IMP=0x00000000000440dd
- (_Bool)shouldStreamTables;	// IMP=0x00000000000440d4
- (void)setMustRegisterDrawables:(_Bool)arg1;	// IMP=0x00000000000440cb
- (_Bool)mustRegisterDrawables;	// IMP=0x00000000000440c2
- (void)setCurrentTableGenerator:(Class)arg1;	// IMP=0x00000000000440b8
- (Class)currentTableGenerator;	// IMP=0x00000000000440ae
- (void)setCurrentDrawablesGenerator:(Class)arg1;	// IMP=0x00000000000440a4
- (Class)currentDrawablesGenerator;	// IMP=0x000000000004409a
- (void)setGeneratorState:(id)arg1;	// IMP=0x0000000000044071
- (id)generatorState;	// IMP=0x0000000000044067
- (void)setTableState:(id)arg1;	// IMP=0x000000000004403e
- (id)tableState;	// IMP=0x0000000000044034
- (int)objectStackDepth;	// IMP=0x0000000000044026
- (void)pushObject:(id)arg1;	// IMP=0x0000000000044015
- (id)popRetainedObject;	// IMP=0x0000000000043fbf
- (id)topObjectOfClass:(Class)arg1;	// IMP=0x0000000000043f5e
- (id)peekObject;	// IMP=0x0000000000043f2b
- (id)outputBundle;	// IMP=0x0000000000043f21
- (struct __CFURL *)createUriToDocumentBundleResource:(struct __CFString *)arg1;	// IMP=0x0000000000043c16
- (struct __CFURL *)createUrlToAppBundleResource:(struct __CFString *)arg1 processorBundle:(struct __CFBundle *)arg2 skipCachingPDFAndNoExtentionResources:(_Bool *)arg3;	// IMP=0x0000000000043ada
- (id)root;	// IMP=0x0000000000043ad0
- (id)processor;	// IMP=0x0000000000043ac6
- (void)dealloc;	// IMP=0x00000000000439f3
- (id)initWithRoot:(id)arg1 processor:(id)arg2 archive:(id)arg3 outputBundle:(id)arg4 fileURL:(struct __CFURL *)arg5;	// IMP=0x00000000000439b5
- (id)initWithRoot:(id)arg1 processor:(id)arg2 bundleUrl:(struct __CFURL *)arg3 archive:(id)arg4 outputBundle:(id)arg5;	// IMP=0x0000000000043958
- (id)initWithRoot:(id)arg1 processor:(id)arg2 outputBundle:(id)arg3 fileURL:(struct __CFURL *)arg4;	// IMP=0x0000000000043864

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
