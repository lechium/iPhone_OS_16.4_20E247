//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ComplicationDisplay/NSObject-Protocol.h>

@protocol CDComplicationDisplayObserver;

@protocol CDComplicationDisplay <NSObject>
@property(nonatomic) _Bool canUseCurvedText;
@property(nonatomic) __weak id <CDComplicationDisplayObserver> displayObserver;

@optional
@property(nonatomic) _Bool shouldUseTemplateColors;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
- (long long)tritiumUpdateMode;
- (void)setEditing:(_Bool)arg1;
- (void)setMaxSize:(struct CGSize)arg1;
@end

