//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, UIImage;
@protocol MRURoutingSubtitleControllerDelegate;

__attribute__((visibility("hidden")))
@interface MRURoutingSubtitleController : NSObject
{
    long long _state;	// 8 = 0x8
    id <MRURoutingSubtitleControllerDelegate> _delegate;	// 16 = 0x10
    NSMutableDictionary *_storage;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000022ea9
@property(retain, nonatomic) NSMutableDictionary *storage; // @synthesize storage=_storage;
@property(nonatomic) __weak id <MRURoutingSubtitleControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
- (long long)nextAvailableTextState;	// IMP=0x0000000000022d7e
- (void)setText:(id)arg1 icon:(id)arg2 forState:(long long)arg3 accessory:(long long)arg4;	// IMP=0x0000000000022b00
- (void)setText:(id)arg1 forState:(long long)arg2 accessory:(long long)arg3;	// IMP=0x0000000000022ae6
- (void)setText:(id)arg1 icon:(id)arg2 forState:(long long)arg3;	// IMP=0x0000000000022ace
- (void)setText:(id)arg1 forState:(long long)arg2;	// IMP=0x0000000000022ab9
- (void)transitionToNextAvailableState;	// IMP=0x0000000000022a98
- (void)prepareForReuse;	// IMP=0x0000000000022a7a
@property(readonly, nonatomic) _Bool canTransitionToNextState;
@property(readonly, nonatomic) long long accessory;
@property(readonly, nonatomic) UIImage *icon;
@property(readonly, copy, nonatomic) NSString *text;
@property(readonly, nonatomic) _Bool hasText;
- (id)description;	// IMP=0x00000000000227fa
- (id)init;	// IMP=0x000000000002278c

@end
