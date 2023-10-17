//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

@protocol WFFocusConfigurationHostContextDelegate;

__attribute__((visibility("hidden")))
@interface WFFocusConfigurationHostContext : NSExtensionContext
{
    id <WFFocusConfigurationHostContextDelegate> _focusConfigurationDelegate;	// 8 = 0x8
}

+ (id)_allowedItemPayloadClasses;	// IMP=0x0010000000027db6
+ (id)_allowedErrorClasses;	// IMP=0x0010000000027d80
+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x0010000000027d60
+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x0010000000027d56
- (void).cxx_destruct;	// IMP=0x0000000000027f29
@property(nonatomic) __weak id <WFFocusConfigurationHostContextDelegate> focusConfigurationDelegate; // @synthesize focusConfigurationDelegate=_focusConfigurationDelegate;
- (void)didPressButtonWithIdentifier:(id)arg1 cellFrame:(struct CGRect)arg2;	// IMP=0x0000000000027e73
- (void)configurationUIStateDidUpdate:(id)arg1;	// IMP=0x0000000000027dfe

@end
