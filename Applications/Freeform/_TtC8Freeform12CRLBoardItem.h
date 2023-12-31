//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRLCanvasInfoGeometry, CRLShadow, MISSING_TYPE, NSArray, NSString, NSURL, NSUUID, _TtC8Freeform12CRLGroupItem, _TtC8Freeform16CRLContainerItem, _TtC8Freeform8CRLBoard;
@protocol CRLCanvasElementInfo;

@interface _TtC8Freeform12CRLBoardItem : NSObject
{
    MISSING_TYPE *transactionContext;	// 8 = 0x8
    MISSING_TYPE *_parentItem;	// 16 = 0x10
    MISSING_TYPE *hyperlinkURL;	// 1414745679 = 0x54534e4f
}

- (void).cxx_destruct;	// IMP=0x00400000007d2ba0
- (id)init;	// IMP=0x00100000007d2b00
- (_Bool)crl_isEqualValue:(id)arg1;	// IMP=0x00100000007d2a80
@property(nonatomic, readonly) NSArray *stringContentForSearch;
@property(nonatomic, readonly) _Bool isSupported;
- (id)getReferencedAssetIDsWithIncludeChildren:(_Bool)arg1;	// IMP=0x00100000007d27b0
- (_Bool)isTransactableEqualValue:(id)arg1;	// IMP=0x00100000007d2450
@property(nonatomic, readonly) _Bool isInBoard;
@property(nonatomic, readonly) _TtC8Freeform8CRLBoard *parentBoard;
@property(nonatomic, readonly) double viewScaleToUseWhenRasterizingSingleBoardItemForCopy;
@property(nonatomic, readonly) NSArray *additionalBoardItemsForUUIDBookkeepingForTemporaryCanvases;
@property(nonatomic, readonly) _Bool wantsCounterRotationWhenNotSupportingParentRotationInRotatedParent;
@property(nonatomic, readonly) struct CGAffineTransform fullTransformInRoot;
@property(nonatomic, readonly) struct CGAffineTransform transformInRoot;
@property(nonatomic, readonly) struct CGAffineTransform computeLayoutFullTransform;
@property(nonatomic, readonly) struct CGAffineTransform computeFullTransform;
@property(nonatomic, readonly) _Bool isAllowedInFreehandDrawings;
@property(nonatomic, readonly) _Bool allowsParentGroupToBeResizedWithoutAspectRatioLock;
@property(nonatomic, readonly) _Bool canAspectRatioLockBeChangedByUser;
@property(nonatomic, readonly) _Bool isLockable;
@property(nonatomic, readonly) _Bool supportsParentRotation;
@property(nonatomic, readonly) _Bool supportsResize;
- (void)withTemporaryLayoutPerform:(CDUnknownBlockType)arg1;	// IMP=0x00100000007d1e40
@property(nonatomic, readonly) Class editorClass;
@property(nonatomic, readonly) Class repClass;
@property(nonatomic, readonly) Class layoutClass;
@property(nonatomic, readonly) _Bool isShareable;
@property(nonatomic, readonly) _Bool isPreviewable;
@property(nonatomic, readonly) _Bool isSelectable;
@property(nonatomic, retain) id <CRLCanvasElementInfo> parentInfo;
- (struct CGPoint)autosizePositionOffsetForGeometry:(id)arg1 dynamicallyDraggedLayout:(id)arg2;	// IMP=0x00100000007d1c80
@property(nonatomic, readonly) struct CGPoint centerForReplacingWithNewItem;
- (void)updateGeometryToReplaceBoardItem:(id)arg1;	// IMP=0x00100000007d1bb0
- (void)takePropertiesFromReplacedBoardItem:(id)arg1;	// IMP=0x00100000007d1b40
@property(nonatomic, readonly) _Bool needsDownload;
@property(nonatomic, readonly) _Bool canCopyData;
@property(nonatomic, readonly) _Bool shouldBeIgnoredWhenCopying;
- (id)promisedStringForCopy;	// IMP=0x00100000007d1970
- (id)promisedDataForPublicType:(id)arg1;	// IMP=0x00100000007d18f0
- (_Bool)wantsStandardPublicTypesInAdditionToCustomTypesToPromiseWhenCopyingSingleBoardItem;	// IMP=0x00100000007d18e0
@property(nonatomic, readonly) NSString *suggestedNameWhenDraggingSingleBoardItem;
@property(nonatomic, readonly) NSArray *customPublicTypesToPromiseWhenCopyingSingleBoardItem;
@property(nonatomic, copy) NSURL *hyperlinkURL;
@property(nonatomic, readonly) _Bool enableDefaultFloatingEffect;
@property(nonatomic, readonly) _Bool allowedToBeDragAndDropped;
@property(nonatomic, retain) CRLShadow *shadow;
@property(nonatomic, copy) NSString *accessibilityDescription;
@property(nonatomic) _Bool aspectRatioLocked;
@property(nonatomic) _Bool locked;
@property(nonatomic, retain) CRLCanvasInfoGeometry *geometry;
@property(nonatomic, readonly) NSString *localizedAccessibilityDescriptionPlaceholder;
@property(nonatomic, readonly) NSString *localizedName;
@property(nonatomic, readonly) NSUUID *parentUUID;
- (long long)compareUsingUUIDTo:(id)arg1;	// IMP=0x00100000007d0d60
@property(nonatomic, readonly) _TtC8Freeform12CRLBoardItem *parentItem;
@property(nonatomic, readonly) NSUUID *id;
- (id)infoGeometryForVisiblePositioningInfoGeometry:(id)arg1;	// IMP=0x00100000005003a0
- (struct CGRect)visibleBoundsForPositioning;	// IMP=0x00100000005001f6
- (void)crl_onBoard:(id)arg1 moveItemToPosition:(struct CGPoint)arg2 size:(struct CGSize)arg3;	// IMP=0x001000000050049e
- (void)p_onBoard:(id)arg1 setPositionerCalculatedSize:(struct CGSize)arg2;	// IMP=0x00100000005003b6
@property(nonatomic, readonly) _TtC8Freeform12CRLGroupItem *containingGroup;
@property(nonatomic, readonly) _TtC8Freeform16CRLContainerItem *parentContainerItem;
@property(nonatomic, readonly) _Bool shouldBeDeletedWhenEndEditing;
@property(nonatomic, readonly) _Bool canAdjustHeightInInspector;
@property(nonatomic, readonly) _Bool canAdjustWidthInInspector;
@property(nonatomic, readonly) _Bool canAdjustPositionInInspector;

@end

