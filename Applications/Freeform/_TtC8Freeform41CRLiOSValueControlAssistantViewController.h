//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface _TtC8Freeform41CRLiOSValueControlAssistantViewController
{
    MISSING_TYPE *staysOpenForSelectionChangeWhenWritingToControl;	// 120 = 0x78
    MISSING_TYPE *alwaysStaysOpenOnSelectionChange;	// 121 = 0x79
    MISSING_TYPE *allowOwnerPaneRefreshWhilePresenting;	// 122 = 0x7a
}

+ (void)setUserWantsSystemKeyboardDefaultValue:(_Bool)arg1;	// IMP=0x0020000000874460
+ (_Bool)userWantsSystemKeyboardDefaultValue;	// IMP=0x0010000000874340
@property(nonatomic, readonly) _Bool allowOwnerPaneRefreshWhilePresenting; // @synthesize allowOwnerPaneRefreshWhilePresenting;
@property(nonatomic) _Bool alwaysStaysOpenOnSelectionChange; // @synthesize alwaysStaysOpenOnSelectionChange;
@property(nonatomic) _Bool staysOpenForSelectionChangeWhenWritingToControl; // @synthesize staysOpenForSelectionChangeWhenWritingToControl;
- (void)setAlwaysAllowsFractionalInput:(_Bool)arg1 forControl:(id)arg2;	// IMP=0x00100000008742e0
- (_Bool)alwaysAllowsFractionalInputForControl:(id)arg1;	// IMP=0x0010000000874040
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000873d50

@end

