//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MKAnnotationView, MKPinAnnotationView, MKPriorityToIndexMap, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSString;
@protocol MKAnnotationContainerViewDelegate;

__attribute__((visibility("hidden")))
@interface MKAnnotationContainerView : UIView
{
    NSMutableOrderedSet *_annotationViews;	// 8 = 0x8
    NSMutableDictionary *_clusteringAnnotationViews;	// 16 = 0x10
    NSMutableArray *_customFeatureDataSourceObservers;	// 24 = 0x18
    NSMutableArray *_awaitingDropPins;	// 32 = 0x20
    MKAnnotationView *_selectedAnnotationView;	// 40 = 0x28
    MKAnnotationView *_annotationViewToSelect;	// 48 = 0x30
    id <MKAnnotationContainerViewDelegate> _delegate;	// 56 = 0x38
    MKAnnotationView *_draggingAnnotationView;	// 64 = 0x40
    struct CGPoint _previousMouseDragPoint;	// 72 = 0x48
    double _previousMouseDragTimeStamp;	// 88 = 0x58
    struct CGPoint _mouseDownPoint;	// 96 = 0x60
    struct CGPoint _draggingAnnotationViewCenter;	// 112 = 0x70
    unsigned long long _mapType;	// 128 = 0x80
    _Bool _clickedOnAnnotationView;	// 136 = 0x88
    _Bool _didDragAnnotationView;	// 137 = 0x89
    MKAnnotationView *_userLocationView;	// 144 = 0x90
    double _annotationViewsRotationRadians;	// 152 = 0x98
    struct CGAffineTransform _mapTransform;	// 160 = 0xa0
    _Bool _suppressCallout;	// 208 = 0xd0
    NSMutableArray *_pinsToAnimate;	// 216 = 0xd8
    double _mapPitchRadians;	// 224 = 0xe0
    CDStruct_80aa614a _mapDisplayStyle;	// 232 = 0xe8
    _Bool _suppress;	// 237 = 0xed
    _Bool _isUpdating;	// 238 = 0xee
    double _lastUpdate;	// 240 = 0xf0
    NSMutableDictionary *_clusterableAnnotationViews;	// 248 = 0xf8
    NSMutableArray *_requiredPriorityAnnotationViews;	// 256 = 0x100
    NSMutableSet *_collidableAnnotationViews;	// 264 = 0x108
    NSMutableDictionary *_collidingAnnotationViews;	// 272 = 0x110
    NSMutableDictionary *_existingClusterAnnotationViews;	// 280 = 0x118
    MKPriorityToIndexMap *_priorityMap;	// 288 = 0x120
    NSMutableSet *_prioritiesToAdd;	// 296 = 0x128
}

- (void).cxx_destruct;	// IMP=0x00000000001f24f6
@property(readonly, nonatomic) MKAnnotationView *draggingAnnotationView; // @synthesize draggingAnnotationView=_draggingAnnotationView;
@property(nonatomic) _Bool suppressCallout; // @synthesize suppressCallout=_suppressCallout;
- (void)updateAnnotationViewsWithDelay;	// IMP=0x00000000001f24be
- (void)_performStateUpdatesIfNeeded;	// IMP=0x00000000001f230f
- (void)_updateCollidableAnnotationViews;	// IMP=0x00000000001f1d4d
- (void)_updateClusterableAnnotationViews:(id)arg1 withID:(id)arg2;	// IMP=0x00000000001f114e
- (id)_existingClusterViewsForClusterID:(id)arg1;	// IMP=0x00000000001f1087
- (_Bool)_updateAnnotationViewPositions;	// IMP=0x00000000001f106a
- (void)stopSuppressingUpdates;	// IMP=0x00000000001f1059
- (void)suppressUpdates;	// IMP=0x00000000001f1028
- (_Bool)_updateAnnotationViews:(id)arg1;	// IMP=0x00000000001f0c9b
- (void)_updateAnnotationView:(id)arg1;	// IMP=0x00000000001f0c12
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000001f0b3a
- (CDStruct_02837cd9)_mapRectWithFraction:(double)arg1 ofVisible:(CDStruct_02837cd9)arg2;	// IMP=0x00000000001f0a71
- (void)transitionTo:(long long)arg1;	// IMP=0x00000000001f093c
- (_Bool)_updatePriorityMapIfNeeded;	// IMP=0x00000000001f08d0
- (void)_addPrioritiesForAnnotationViewIfNeeded:(id)arg1;	// IMP=0x00000000001f074a
- (void)_updateZPositionForAnnotationView:(id)arg1 inBounds:(struct CGRect)arg2;	// IMP=0x00000000001f0593
- (void)annotationViewDidChangeMetrics:(id)arg1;	// IMP=0x00000000001f055e
- (void)annotationViewDidChangeHidden:(id)arg1;	// IMP=0x00000000001f0367
- (void)annotationViewDidChangeZPriority:(id)arg1;	// IMP=0x00000000001f0184
@property(readonly, nonatomic) CDStruct_089f5ccb currentComparisonContext;
- (void)selectAnnotationView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001efeda
- (void)dropPinsIfNeeded;	// IMP=0x00000000001efec3
- (void)removeAnnotationView:(id)arg1;	// IMP=0x00000000001efad8
- (void)finishAddingAndRemovingAnnotationViews;	// IMP=0x00000000001efaa8
- (void)addAnnotationView:(id)arg1 allowAnimation:(_Bool)arg2;	// IMP=0x00000000001ef1f3
- (void)_willRemoveInternalAnnotationView:(id)arg1;	// IMP=0x00000000001ef151
- (void)_dropPinsIfNeeded:(_Bool)arg1;	// IMP=0x00000000001eec2b
- (void)setUserLocationView:(id)arg1;	// IMP=0x00000000001eeafe
@property(readonly, nonatomic) MKAnnotationView *userLocationView;
@property(readonly, nonatomic) _Bool hasPendingAnimations;
@property(readonly, nonatomic) _Bool hasDroppingPins;
- (struct UIEdgeInsets)accessoryPadding;	// IMP=0x00000000001ee96c
- (void)pinDidDrop:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001ee85d
- (void)_dropDraggingAnnotationViewAnimated:(_Bool)arg1;	// IMP=0x00000000001ee61d
- (struct CGPoint)draggingAnnotationViewDropPointForPoint:(struct CGPoint)arg1;	// IMP=0x00000000001ee5d3
- (struct CGPoint)draggingAnnotationViewDropPoint;	// IMP=0x00000000001ee4f7
- (void)draggingTouchMovedToPoint:(struct CGPoint)arg1 edgeInsets:(struct UIEdgeInsets)arg2;	// IMP=0x00000000001ee341
- (void)_draggingAnnotationViewDidPause:(id)arg1;	// IMP=0x00000000001ee2fa
- (void)_liftForDragging:(id)arg1 mouseDownPoint:(struct CGPoint)arg2;	// IMP=0x00000000001ee1e2
- (id)annotationViewForPoint:(struct CGPoint)arg1;	// IMP=0x00000000001ee1c6
- (id)_annotationViewForSelectionAtPoint:(struct CGPoint)arg1 avoidCurrent:(_Bool)arg2 maxDistance:(double)arg3;	// IMP=0x00000000001edcd5
@property(readonly, nonatomic) NSMutableOrderedSet *annotationViews;
- (void)updateUserLocationView;	// IMP=0x00000000001edc9c
- (void)updateAnnotationView:(id)arg1;	// IMP=0x00000000001edc8a
- (struct CGPoint)pointForCoordinate:(struct CLLocationCoordinate2D)arg1;	// IMP=0x00000000001edc1d
- (struct CLLocationCoordinate2D)coordinateForAnnotationView:(id)arg1;	// IMP=0x00000000001edb75
- (void)_updateAnnotationViewsForReason:(long long)arg1 updatePositions:(_Bool)arg2;	// IMP=0x00000000001ed51f
- (void)updateAnnotationViewsForReason:(long long)arg1;	// IMP=0x00000000001ed508
- (void)deselectAnnotationView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001ed38d
- (void)updateCalloutStateForSelectedAnnotationView:(id)arg1;	// IMP=0x00000000001ed33b
- (void)removeAnnotationViewsRotationAnimations;	// IMP=0x00000000001ed189
- (void)setAnnotationViewsRotationRadians:(double)arg1 animation:(id)arg2;	// IMP=0x00000000001ed049
@property(readonly, nonatomic) MKPinAnnotationView *bubblePin;
- (void)visibleCenteringRectChanged;	// IMP=0x00000000001ececf
- (struct CGRect)_visibleRect;	// IMP=0x00000000001ece6e
- (struct CGRect)_visibleCenteringRectInView:(id)arg1;	// IMP=0x00000000001ecdf8
- (struct CGRect)_visibleCenteringRect;	// IMP=0x00000000001ecd97
- (_Bool)calloutContainsPoint:(struct CGPoint)arg1;	// IMP=0x00000000001eccb0
- (void)setMapDisplayStyle:(CDStruct_80aa614a)arg1;	// IMP=0x00000000001ecb44
@property(nonatomic) unsigned long long mapType;
- (void)setMapPitchRadians:(double)arg1;	// IMP=0x00000000001ec882
@property(nonatomic) __weak id <MKAnnotationContainerViewDelegate> delegate;
- (void)dealloc;	// IMP=0x00000000001ec646
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001ec4fc
- (id)globalAnnotations;	// IMP=0x00000000001f2b1f
- (id)annotationsInMapRect:(CDStruct_02837cd9)arg1;	// IMP=0x00000000001f2914
- (unsigned char)sceneState;	// IMP=0x00000000001f2909
- (unsigned char)sceneID;	// IMP=0x00000000001f2901
- (void)getClusterImageTextForClusterFeatureCount:(unsigned long long)arg1 text:(id *)arg2 locale:(id *)arg3;	// IMP=0x00000000001f28fb
- (void)getClusterAnnotationTextForClusterFeatureCount:(unsigned long long)arg1 text:(id *)arg2 locale:(id *)arg3;	// IMP=0x00000000001f28f5
- (id)clusterStyleAttributes;	// IMP=0x00000000001f28ed
- (_Bool)isClusteringEnabled;	// IMP=0x00000000001f28e5
- (void)removeObserver:(id)arg1;	// IMP=0x00000000001f28c8
- (void)addObserver:(id)arg1;	// IMP=0x00000000001f284e
- (void)invalidateCustomFeatureDataSource;	// IMP=0x00000000001f277b
- (void)invalidateCustomFeatureDataSourceRect:(CDStruct_02837cd9)arg1;	// IMP=0x00000000001f2624

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

