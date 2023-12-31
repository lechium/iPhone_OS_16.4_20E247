//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRLCanvasLayoutGeometryAccessibility, CRLCanvasRepAccessibility, CRLWPStorageAccessibility;

@interface CRLCanvasLayoutAccessibility
{
}

+ (Class)crlaxBaseSafeCategoryClass;	// IMP=0x002000000052e6ca
+ (id)crlaxTargetClassName;	// IMP=0x001000000052e6bd
+ (id)crlaxCastFrom:(id)arg1;	// IMP=0x001000000052e6e4
- (void)invalidate;	// IMP=0x001000000052e929
@property(readonly, nonatomic) CRLCanvasRepAccessibility *crlaxRepForLayout;
@property(readonly, nonatomic) _Bool crlaxIsDraggable;
@property(readonly, nonatomic) _Bool crlaxIsSelectable;
@property(readonly, nonatomic) CRLWPStorageAccessibility *crlaxStorage;
@property(readonly, nonatomic) CRLCanvasLayoutGeometryAccessibility *crlaxInspectorGeometry;
- (id)_longDragAnnouncementStringForDiff:(struct CGPoint)arg1;	// IMP=0x00100000000710a9
- (id)_dragAnnouncementStringForDiff:(struct CGPoint)arg1;	// IMP=0x001000000007104c
- (long long)crlaxDragAnnouncementType;	// IMP=0x0010000000071041
- (void)dragBy:(struct CGPoint)arg1;	// IMP=0x0010000000070f4b
- (id)crlaxTarget;	// IMP=0x001000000052e6db

@end

