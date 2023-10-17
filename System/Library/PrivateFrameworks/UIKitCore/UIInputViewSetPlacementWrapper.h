//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIInputViewSetPlacement;

__attribute__((visibility("hidden")))
@interface UIInputViewSetPlacementWrapper
{
    UIInputViewSetPlacement *_actualPlacement;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000b60200
+ (id)placementWithPlacement:(id)arg1;	// IMP=0x0010000000b601a7
- (void).cxx_destruct;	// IMP=0x0000000000b606d3
- (id)description;	// IMP=0x0000000000b60692
- (unsigned long long)computeComparisonMask;	// IMP=0x0000000000b60675
- (unsigned long long)indexForPurpose:(unsigned long long)arg1;	// IMP=0x0000000000b60658
- (id)subPlacements;	// IMP=0x0000000000b6063b
- (id)applicatorInfoForOwner:(id)arg1;	// IMP=0x0000000000b6061e
- (Class)applicatorClassForKeyboard:(_Bool)arg1;	// IMP=0x0000000000b60601
- (struct CGAffineTransform)transform;	// IMP=0x0000000000b605bf
- (double)alpha;	// IMP=0x0000000000b605a2
- (struct CGRect)remoteIntrinsicContentSizeForInputViewInSet:(id)arg1 includingIAV:(_Bool)arg2;	// IMP=0x0000000000b60560
- (_Bool)accessoryViewWillAppear;	// IMP=0x0000000000b60543
- (_Bool)inputViewWillAppear;	// IMP=0x0000000000b60526
- (double)inputAssistantViewHeightForInputViewSet:(id)arg1;	// IMP=0x0000000000b60509
- (id)widthConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;	// IMP=0x0000000000b604ec
- (id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;	// IMP=0x0000000000b604cf
- (id)horizontalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;	// IMP=0x0000000000b604b2
- (_Bool)isInteractive;	// IMP=0x0000000000b60495
- (_Bool)showsEditItems;	// IMP=0x0000000000b60478
- (_Bool)showsInputOrAssistantViews;	// IMP=0x0000000000b6045b
- (_Bool)showsKeyboard;	// IMP=0x0000000000b6043e
- (_Bool)showsInputViews;	// IMP=0x0000000000b60421
- (_Bool)isVisible;	// IMP=0x0000000000b60404
- (_Bool)isUndocked;	// IMP=0x0000000000b603e7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b6036c
- (void)setDirty;	// IMP=0x0000000000b60320
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000b602a3
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000b60208

@end
