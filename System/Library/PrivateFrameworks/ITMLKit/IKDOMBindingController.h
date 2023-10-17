//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IKAppContext, IKDOMElement, IKDataBinding, IKJSDataItem, NSDictionary, NSMutableArray, NSString, _IKDOMMutationRuleSet;
@protocol IKDOMBindingStrategy;

__attribute__((visibility("hidden")))
@interface IKDOMBindingController : NSObject
{
    NSDictionary *_bindingKeysByPathString;	// 8 = 0x8
    struct {
        _Bool hasKeysAffectingChildren;
        _Bool hasKeysAffectingSubtree;
        _Bool hasPrototypeDependentKeys;
        _Bool hasValueDidChangeForKey;
        _Bool hasDidResolveKeys;
    } _strategyFlags;	// 16 = 0x10
    NSMutableArray *_scheduledUpdaters;	// 24 = 0x18
    IKAppContext *_appContext;	// 32 = 0x20
    IKDOMElement *_domElement;	// 40 = 0x28
    IKDOMBindingController *_parent;	// 48 = 0x30
    IKDataBinding *_binding;	// 56 = 0x38
    IKJSDataItem *_dataItem;	// 64 = 0x40
    id <IKDOMBindingStrategy> _strategy;	// 72 = 0x48
    _IKDOMMutationRuleSet *_mutationRuleSet;	// 80 = 0x50
    NSDictionary *_prototypeGroupsByType;	// 88 = 0x58
    unsigned long long _resolutionTarget;	// 96 = 0x60
}

+ (id)_prototypeGroupsByTypeForDOMElement:(id)arg1;	// IMP=0x0010000000093f2a
+ (id)_parsedMutationRulesForDOMElement:(id)arg1;	// IMP=0x0010000000093a7b
+ (id)instantiateDOMElementForItem:(id)arg1 withPrototype:(id)arg2 parentDOMElement:(id)arg3 existingDOMElement:(id)arg4;	// IMP=0x001000000009292f
+ (id)domBindingControllerForDOMElement:(id)arg1;	// IMP=0x00100000000910ba
+ (void)prepareForDOMElement:(id)arg1;	// IMP=0x0010000000091000
+ (id)parsedBindingForDOMElement:(id)arg1;	// IMP=0x00100000000907e4
- (void).cxx_destruct;	// IMP=0x0000000000095f53
@property(readonly, nonatomic) unsigned long long resolutionTarget; // @synthesize resolutionTarget=_resolutionTarget;
@property(readonly, nonatomic) NSDictionary *prototypeGroupsByType; // @synthesize prototypeGroupsByType=_prototypeGroupsByType;
@property(readonly, nonatomic) _IKDOMMutationRuleSet *mutationRuleSet; // @synthesize mutationRuleSet=_mutationRuleSet;
@property(readonly, nonatomic) id <IKDOMBindingStrategy> strategy; // @synthesize strategy=_strategy;
@property(readonly, nonatomic) __weak IKJSDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(readonly, nonatomic) IKDataBinding *binding; // @synthesize binding=_binding;
@property(readonly, nonatomic) __weak IKDOMBindingController *parent; // @synthesize parent=_parent;
@property(readonly, nonatomic) __weak IKDOMElement *domElement; // @synthesize domElement=_domElement;
@property(readonly, nonatomic) __weak IKAppContext *appContext; // @synthesize appContext=_appContext;
- (void)_evaluateMutationRules;	// IMP=0x0000000000095c6e
- (void)_resolveBinding;	// IMP=0x000000000009496d
- (_Bool)_canBeReused;	// IMP=0x00000000000946ee
- (void)dataObservable:(id)arg1 didChangePropertyPathWithString:(id)arg2 extraInfo:(id)arg3;	// IMP=0x000000000009314d
- (id)findPrototypeForDataItem:(id)arg1;	// IMP=0x0000000000092d59
- (void)scheduleUpdateUsingPreUpdate:(CDUnknownBlockType)arg1 update:(CDUnknownBlockType)arg2;	// IMP=0x0000000000092219
- (void)dealloc;	// IMP=0x0000000000092168
- (id)initWithDOMElement:(id)arg1;	// IMP=0x00000000000910cf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
