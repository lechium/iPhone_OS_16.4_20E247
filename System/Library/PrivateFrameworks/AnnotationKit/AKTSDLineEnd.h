//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface AKTSDLineEnd : NSObject
{
    struct CGPath *mPath;	// 8 = 0x8
    struct CGPath *mWrapPath;	// 16 = 0x10
    struct CGPoint mEndPoint;	// 24 = 0x18
    _Bool mIsFilled;	// 40 = 0x28
    NSString *mIdentifier;	// 48 = 0x30
    int mLineJoin;	// 56 = 0x38
}

+ (id)lineEndWithPath:(struct CGPath *)arg1 wrapPath:(struct CGPath *)arg2 endPoint:(struct CGPoint)arg3 isFilled:(_Bool)arg4 identifier:(id)arg5;	// IMP=0x00100000000b6966
+ (id)lineEndWithPath:(struct CGPath *)arg1 endPoint:(struct CGPoint)arg2 isFilled:(_Bool)arg3 identifier:(id)arg4;	// IMP=0x00100000000b68e5
+ (id)lineEndWithIdentifier:(id)arg1;	// IMP=0x00100000000b671e
+ (id)lineEndWithType:(int)arg1;	// IMP=0x00100000000b66df
+ (id)none;	// IMP=0x00100000000b66a8
+ (id)line;	// IMP=0x00100000000b6625
+ (id)invertedArrow;	// IMP=0x00100000000b6578
+ (id)openCircle;	// IMP=0x00100000000b647e
+ (id)openSquare;	// IMP=0x00100000000b6384
+ (id)filledSquare;	// IMP=0x00100000000b6292
+ (id)filledArrow;	// IMP=0x00100000000b61d0
+ (id)openArrow;	// IMP=0x00100000000b60f7
+ (id)filledDiamond;	// IMP=0x00100000000b6030
+ (id)filledCircle;	// IMP=0x00100000000b5f3e
+ (id)simpleArrow;	// IMP=0x00100000000b5e9b
- (void).cxx_destruct;	// IMP=0x00000000000b6d98
@property(readonly, nonatomic) int lineJoin; // @synthesize lineJoin=mLineJoin;
@property(readonly, nonatomic) _Bool isFilled; // @synthesize isFilled=mIsFilled;
@property(readonly, nonatomic) struct CGPoint endPoint; // @synthesize endPoint=mEndPoint;
@property(readonly, nonatomic) struct CGPath *path; // @synthesize path=mPath;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=mIdentifier;
- (id)description;	// IMP=0x00000000000b6cc0
@property(readonly, nonatomic) _Bool isNone;
@property(readonly, nonatomic) struct CGPath *wrapPath;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b6bfd
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b6b43
- (unsigned long long)hash;	// IMP=0x00000000000b6b2d
- (void)dealloc;	// IMP=0x00000000000b6aea
- (id)initWithPath:(struct CGPath *)arg1 endPoint:(struct CGPoint)arg2 isFilled:(_Bool)arg3 identifier:(id)arg4;	// IMP=0x00000000000b6ac0
- (id)initWithPath:(struct CGPath *)arg1 wrapPath:(struct CGPath *)arg2 endPoint:(struct CGPoint)arg3 isFilled:(_Bool)arg4 identifier:(id)arg5 lineJoin:(int)arg6;	// IMP=0x00000000000b69f8

@end

