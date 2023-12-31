//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IKViewElement, _TVWindowSizeAdaptor;
@protocol TVMediaQueryEvaluatorDelegate, UITraitEnvironment;

__attribute__((visibility("hidden")))
@interface TVMediaQueryEvaluator : NSObject
{
    _TVWindowSizeAdaptor *_windowSizeAdaptor;	// 8 = 0x8
    struct {
        unsigned int respondsToEvaluate:1;
    } _implFlags;	// 16 = 0x10
    IKViewElement *_templateElement;	// 24 = 0x18
    id <UITraitEnvironment> _traitEnvironment;	// 32 = 0x20
    id <TVMediaQueryEvaluatorDelegate> _delegate;	// 40 = 0x28
}

+ (id)_mobileGestaltStringForKey:(struct __CFString *)arg1;	// IMP=0x00600000000d6577
+ (id)_productType;	// IMP=0x00600000000d43ed
+ (id)evaluatorForTemplateElement:(id)arg1 inWindow:(id)arg2 traitEnvironment:(id)arg3;	// IMP=0x00600000000d3c39
+ (id)evaluatorForTemplateElement:(id)arg1 inWindow:(id)arg2;	// IMP=0x00600000000d3bc2
- (void).cxx_destruct;	// IMP=0x00000000000d6645
@property(nonatomic) __weak id <TVMediaQueryEvaluatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, retain, nonatomic) _TVWindowSizeAdaptor *windowSizeAdaptor; // @synthesize windowSizeAdaptor=_windowSizeAdaptor;
@property(readonly, nonatomic) __weak id <UITraitEnvironment> traitEnvironment; // @synthesize traitEnvironment=_traitEnvironment;
@property(retain, nonatomic) IKViewElement *templateElement; // @synthesize templateElement=_templateElement;
- (_Bool)_evaluateAllMediaFeatureType:(id)arg1 withValue:(id)arg2;	// IMP=0x00000000000d5305
- (_Bool)_evaluateTemplateFeatureType:(id)arg1 withValue:(id)arg2;	// IMP=0x00000000000d4567
- (_Bool)_evaluateDeviceFeatureType:(id)arg1 withValue:(id)arg2;	// IMP=0x00000000000d44d8
- (_Bool)evaluateMediaQuery:(id)arg1;	// IMP=0x00000000000d3f0a
- (id)initWithTemplateElement:(id)arg1 inWindow:(id)arg2 traitEnvironment:(id)arg3;	// IMP=0x00000000000d3e05
- (id)initWithTemplateElement:(id)arg1 inWindow:(id)arg2;	// IMP=0x00000000000d3df0
- (id)initWithTemplateElement:(id)arg1;	// IMP=0x00000000000d3ddc

@end

