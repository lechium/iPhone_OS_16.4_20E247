//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIKeyboardInputMode.h"

@class NSExtension;

__attribute__((visibility("hidden")))
@interface UIKeyboardExtensionInputMode : UIKeyboardInputMode
{
    NSExtension *_extension;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000009a68bd
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
- (id)_indicatorIconWithBackground:(_Bool)arg1 scaleFactor:(double)arg2;	// IMP=0x00000000009a669e
- (_Bool)isDesiredForTraits:(id)arg1;	// IMP=0x00000000009a647b
- (_Bool)isAllowedForTraits:(id)arg1;	// IMP=0x00000000009a6469
- (id)normalizedIdentifierLevels;	// IMP=0x00000000009a645c
- (id)identifierWithLayouts;	// IMP=0x00000000009a644a
- (id)containingBundleDisplayName;	// IMP=0x00000000009a63d0
- (id)containingBundle;	// IMP=0x00000000009a6321
- (_Bool)isExtensionInputMode;	// IMP=0x00000000009a6319
- (_Bool)isStalledExtensionInputMode;	// IMP=0x00000000009a622d
- (_Bool)defaultLayoutIsASCIICapable;	// IMP=0x00000000009a6191
- (_Bool)isDefaultRightToLeft;	// IMP=0x00000000009a60f5
- (id)extendedDisplayName;	// IMP=0x00000000009a5fae
- (id)displayName;	// IMP=0x00000000009a5edc
- (id)hardwareLayout;	// IMP=0x00000000009a57af
- (_Bool)showSWLayoutWithHWKeyboard;	// IMP=0x00000000009a572b
- (void)setPrimaryLanguage:(id)arg1;	// IMP=0x00000000009a55fe
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000000009a50fa

@end
