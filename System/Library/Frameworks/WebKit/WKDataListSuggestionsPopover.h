//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface WKDataListSuggestionsPopover
{
    struct RetainPtr<WKFormRotatingAccessoryPopover> _popover;	// 48 = 0x30
    struct RetainPtr<WKDataListSuggestionsViewController> _suggestionsViewController;	// 56 = 0x38
}

- (id).cxx_construct;	// IMP=0x00000000004613a2
- (void).cxx_destruct;	// IMP=0x0000000000461356
- (void)didSelectOptionAtIndex:(long long)arg1;	// IMP=0x00000000004611eb
- (void)invalidate;	// IMP=0x00000000004611cc
- (void)showSuggestionsDropdown:(void *)arg1 activationType:(unsigned char)arg2;	// IMP=0x0000000000461084
- (void)updateWithInformation:(void *)arg1;	// IMP=0x0000000000461002
- (id)initWithInformation:(void *)arg1 inView:(id)arg2;	// IMP=0x0000000000460f84

@end

