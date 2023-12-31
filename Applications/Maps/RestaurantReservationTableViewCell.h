//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, NSString, RestaurantReservationCollectionViewFlowLayout, UIActivityIndicatorView, UIButton, UICollectionView, UILabel, UIView;

@interface RestaurantReservationTableViewCell : UITableViewCell
{
    _Bool _dateAndPartySizeHidden;	// 8 = 0x8
    _Bool _loadingIndicatorHidden;	// 9 = 0x9
    _Bool _errorHidden;	// 10 = 0xa
    _Bool _displayOffers;	// 11 = 0xb
    UIView *_dateAndPartySizeContainerView;	// 16 = 0x10
    UILabel *_dateAndPartySizeLabel;	// 24 = 0x18
    UIButton *_dateAndPartySizeButton;	// 32 = 0x20
    UIView *_loadingIndicatorContainerView;	// 40 = 0x28
    UIActivityIndicatorView *_loadingIndicator;	// 48 = 0x30
    UILabel *_loadingIndicatorLabel;	// 56 = 0x38
    UIView *_errorContainerView;	// 64 = 0x40
    UILabel *_errorLabel;	// 72 = 0x48
    UIButton *_errorButton;	// 80 = 0x50
    UILabel *_errorButtonTitleLabel;	// 88 = 0x58
    UICollectionView *_timeSelectionCollectionView;	// 96 = 0x60
    NSLayoutConstraint *_contentBottomByTimeSelection;	// 104 = 0x68
    NSLayoutConstraint *_contentBottomByError;	// 112 = 0x70
}

+ (id)reuseIdentifierForClass:(Class)arg1;	// IMP=0x0020000000a5c2cc
- (void).cxx_destruct;	// IMP=0x0020000000a5c867
@property(retain, nonatomic) NSLayoutConstraint *contentBottomByError; // @synthesize contentBottomByError=_contentBottomByError;
@property(retain, nonatomic) NSLayoutConstraint *contentBottomByTimeSelection; // @synthesize contentBottomByTimeSelection=_contentBottomByTimeSelection;
@property(nonatomic) _Bool displayOffers; // @synthesize displayOffers=_displayOffers;
@property(retain, nonatomic) UICollectionView *timeSelectionCollectionView; // @synthesize timeSelectionCollectionView=_timeSelectionCollectionView;
@property(nonatomic) _Bool errorHidden; // @synthesize errorHidden=_errorHidden;
@property(retain, nonatomic) UILabel *errorButtonTitleLabel; // @synthesize errorButtonTitleLabel=_errorButtonTitleLabel;
@property(retain, nonatomic) UIButton *errorButton; // @synthesize errorButton=_errorButton;
@property(retain, nonatomic) UILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(retain, nonatomic) UIView *errorContainerView; // @synthesize errorContainerView=_errorContainerView;
@property(nonatomic) _Bool loadingIndicatorHidden; // @synthesize loadingIndicatorHidden=_loadingIndicatorHidden;
@property(retain, nonatomic) UILabel *loadingIndicatorLabel; // @synthesize loadingIndicatorLabel=_loadingIndicatorLabel;
@property(retain, nonatomic) UIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain, nonatomic) UIView *loadingIndicatorContainerView; // @synthesize loadingIndicatorContainerView=_loadingIndicatorContainerView;
@property(nonatomic) _Bool dateAndPartySizeHidden; // @synthesize dateAndPartySizeHidden=_dateAndPartySizeHidden;
@property(retain, nonatomic) UIButton *dateAndPartySizeButton; // @synthesize dateAndPartySizeButton=_dateAndPartySizeButton;
@property(retain, nonatomic) UILabel *dateAndPartySizeLabel; // @synthesize dateAndPartySizeLabel=_dateAndPartySizeLabel;
@property(retain, nonatomic) UIView *dateAndPartySizeContainerView; // @synthesize dateAndPartySizeContainerView=_dateAndPartySizeContainerView;
- (void)_updateContentViewBottomConstraint;	// IMP=0x0010000000a5c5a1
- (void)updateConstraints;	// IMP=0x0010000000a5c468
- (void)layoutSubviews;	// IMP=0x0010000000a5c2d9
@property(readonly, nonatomic) _Bool timeSelectionHidden;
@property(readonly, nonatomic) RestaurantReservationCollectionViewFlowLayout *timeSelectionCollectionViewLayout;
- (void)addErrorButtonTouchUpInsideTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x0010000000a5c1a0
- (void)setDisplayError:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000a5c09f
@property(nonatomic) _Bool displayError;
@property(copy, nonatomic) NSString *errorButtonText;
@property(copy, nonatomic) NSString *errorText;
@property(copy, nonatomic) NSString *loadingText;
- (void)setLoading:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000a5bc76
@property(nonatomic) _Bool loading;
- (void)setHideDateAndPartySize:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000a5bb52
@property(copy, nonatomic) NSString *dateAndPartySizeButtonText;
@property(copy, nonatomic) NSString *dateAndPartySizeText;
- (void)addDateAndPartySizeButtonTouchUpInsideTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x0010000000a5b94c
- (void)_setupContentViewConstraints;	// IMP=0x0010000000a5ac0c
- (void)_initTimeSelectionCollectionView;	// IMP=0x0010000000a5a989
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000a5a832
- (void)_setupErrorContainerViewConstraints;	// IMP=0x0010000000a5a197
- (void)_initErrorContainerView;	// IMP=0x0010000000a59e6c
- (void)_setupLoadingIndicatorContainerViewConstraints;	// IMP=0x0010000000a59a82
- (void)_initLoadingIndicatorContainerView;	// IMP=0x0010000000a5987d
- (void)_setupDateAndPartySizeContainerViewConstraints;	// IMP=0x0010000000a5944e
- (void)_initDateAndPartySizeContainerView;	// IMP=0x0010000000a5922c
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0010000000a59092
- (void)dealloc;	// IMP=0x0010000000a59038

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

