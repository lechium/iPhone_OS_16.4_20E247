//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRLCanvasInfoGeometry, MISSING_TYPE, NSSet;
@protocol CRLCanvasElementInfo;

@interface _TtC8Freeform24CRLMultiselectResizeInfo : NSObject
{
    MISSING_TYPE *_selectedBoardItems;	// 8 = 0x8
    MISSING_TYPE *parentInfo;	// 16 = 0x10
    MISSING_TYPE *geometry;	// 24 = 0x18
    MISSING_TYPE *isSupported;	// 32 = 0x20
    MISSING_TYPE *repClass;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0040000000793990
- (id)init;	// IMP=0x0010000000793930
@property(nonatomic, readonly) NSSet *representedSelectedBoardItems;
- (void)setRepresentedSelectedBoardItems:(id)arg1 currentlyLaidOutWith:(id)arg2;	// IMP=0x0010000000793840
@property(nonatomic, readonly) Class editorClass;
@property(nonatomic, readonly) Class repClass;
@property(nonatomic, readonly) Class layoutClass;
@property(nonatomic, readonly) _Bool isSupported; // @synthesize isSupported;
@property(nonatomic, readonly) _Bool isSelectable;
@property(nonatomic, retain) CRLCanvasInfoGeometry *geometry; // @synthesize geometry;
@property(nonatomic, retain) id <CRLCanvasElementInfo> parentInfo; // @synthesize parentInfo;
- (id)initWithParentInfo:(id)arg1;	// IMP=0x0010000000793610

@end

