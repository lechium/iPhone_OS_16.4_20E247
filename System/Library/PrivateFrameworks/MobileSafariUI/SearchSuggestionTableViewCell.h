//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CompletionArrowView;

__attribute__((visibility("hidden")))
@interface SearchSuggestionTableViewCell
{
    CompletionArrowView *_accessoryView;	// 8 = 0x8
    _Bool _hidesAccessoryView;	// 16 = 0x10
    CDUnknownBlockType _accessoryActionHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000e6467
@property(copy, nonatomic) CDUnknownBlockType accessoryActionHandler; // @synthesize accessoryActionHandler=_accessoryActionHandler;
@property(nonatomic) _Bool hidesAccessoryView; // @synthesize hidesAccessoryView=_hidesAccessoryView;
- (void)_accessoryButtonTapped:(id)arg1;	// IMP=0x00000000000e641b
- (void)layoutSubviews;	// IMP=0x00000000000e628e
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000e618b
- (void)prepareForReuse;	// IMP=0x00000000000e60ef
@property(nonatomic) _Bool hidesImage;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000000e5dc0

@end
