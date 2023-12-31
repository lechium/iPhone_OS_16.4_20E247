//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSMutableArray, NSSet, _TtC8Freeform12CRLMovieItem;
@protocol CRLModalOperationToken;

@interface CRLMovieEditor
{
    unsigned long long _timePropertyUpdatingCount;	// 8 = 0x8
    id <CRLModalOperationToken> _modalOperationToken;	// 16 = 0x10
    NSMutableArray *_timePropertyUpdatingCancelHandlers;	// 24 = 0x18
    NSMutableArray *_timePropertyUpdatingCommands;	// 32 = 0x20
    NSMutableArray *_timePropertyUpdatingErrors;	// 40 = 0x28
    _Bool _didCancelTimePropertyUpdating;	// 48 = 0x30
}

+ (id)keyPathsForValuesAffectingPlayableBoardItems;	// IMP=0x00400000004e493d
- (void).cxx_destruct;	// IMP=0x00200000004e6a39
- (void)addMiniFormatterElementsToArray:(id)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x00100000004e66bf
- (MISSING_TYPE *)saveDefaultInsertionPreset: /* Error: Ran out of types for this method. */;	// IMP=0x00100000004e63c7
- (_Bool)p_canSaveDefaultMoviePreset;	// IMP=0x00100000004e62e0
- (void)didEndChangingTimePropertyForMovieItem:(id)arg1 withCommand:(id)arg2 error:(id)arg3;	// IMP=0x00100000004e57e7
- (void)willBeginChangingTimePropertyForMovieItem:(id)arg1 withLocalizedMessage:(id)arg2 cancelHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000004e5161
- (void)setPropertyValue:(id)arg1 forMovieProperty:(unsigned long long)arg2;	// IMP=0x00100000004e4d12
- (void)setMovieVolume:(double)arg1;	// IMP=0x00100000004e4a6b
- (long long)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x00100000004e49df
@property(readonly, nonatomic) _TtC8Freeform12CRLMovieItem *anyMovieItem;
@property(readonly, nonatomic) NSSet *playableBoardItems;

@end

