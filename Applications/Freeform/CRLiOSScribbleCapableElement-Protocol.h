//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSUUID;

@protocol CRLiOSScribbleCapableElement <NSObject>
@property(readonly, nonatomic) _Bool scribbleElementIsFocused;
@property(readonly, nonatomic) _Bool shouldDelayScribbleFocus;
@property(readonly, copy, nonatomic) CDUnknownBlockType prepareForScribbleBlock;
@property(readonly, nonatomic) NSUUID *scribbleIdentifier;
@property(readonly, copy, nonatomic) CDUnknownBlockType willBeginWritingBlock;
@property(readonly, copy, nonatomic) CDUnknownBlockType scribbleEditingBlock;
@property(readonly, nonatomic) struct CGRect scaledScribbleEditingFrame;
- (struct UIEdgeInsets)hitToleranceInsetsWithDefaultInsets:(struct UIEdgeInsets)arg1;
@end

