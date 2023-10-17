//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

@protocol WFWidgetConfigurationServiceContextDelegate;

__attribute__((visibility("hidden")))
@interface WFWidgetConfigurationServiceContext : NSExtensionContext
{
    id <WFWidgetConfigurationServiceContextDelegate> _widgetConfigurationDelegate;	// 8 = 0x8
}

+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x001000000001cccb
+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x001000000001ccab
- (void).cxx_destruct;	// IMP=0x000000000001ce6d
@property(nonatomic) __weak id <WFWidgetConfigurationServiceContextDelegate> widgetConfigurationDelegate; // @synthesize widgetConfigurationDelegate=_widgetConfigurationDelegate;
- (void)setConfigurationCardViewFrame:(struct CGRect)arg1;	// IMP=0x000000000001cd88
- (void)requestViewControllerDismissal;	// IMP=0x000000000001cceb

@end
