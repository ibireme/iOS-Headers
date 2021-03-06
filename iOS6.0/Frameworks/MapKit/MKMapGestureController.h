/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MKVariableDelayTapRecognizerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class MKVariableDelayTapRecognizer, UIPanGestureRecognizer, UIPinchGestureRecognizer, UITapGestureRecognizer, VKMapView, _UIDynamicAnimationGroup, _UIDynamicValueAnimation;

@interface MKMapGestureController : NSObject <MKVariableDelayTapRecognizerDelegate, UIGestureRecognizerDelegate>
{
    VKMapView *_mapView;
    id <MKMapGestureControllerDelegate> _delegate;
    MKVariableDelayTapRecognizer *_doubleTapGestureRecognizer;
    UITapGestureRecognizer *_twoFingerTapGestureRecognizer;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    double _lastScale;
    _UIDynamicValueAnimation *_pinchDecelerationAnimation;
    _UIDynamicAnimationGroup *_panDecelerationAnimationGroup;
    int _gestureCount;
}

@property(readonly, nonatomic) VKMapView *mapView; // @synthesize mapView=_mapView;
@property(nonatomic) id <MKMapGestureControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(readonly, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer; // @synthesize pinchGestureRecognizer=_pinchGestureRecognizer;
@property(readonly, nonatomic) UITapGestureRecognizer *twoFingerTapGestureRecognizer; // @synthesize twoFingerTapGestureRecognizer=_twoFingerTapGestureRecognizer;
@property(readonly, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer; // @synthesize doubleTapGestureRecognizer=_doubleTapGestureRecognizer;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (double)variableDelayTapRecognizer:(id)arg1 shouldWaitForNextTapForDuration:(double)arg2 afterTouch:(id)arg3;
- (void)handlePan:(id)arg1;
- (void)handlePinch:(id)arg1;
- (void)handleTwoFingerTap:(id)arg1;
- (void)handleDoubleTap:(id)arg1;
- (void)endGesturing;
- (void)beginGesturing;
- (void)stopDynamicAnimations;
@property(nonatomic, getter=isScrollEnabled) BOOL scrollEnabled;
@property(nonatomic, getter=isZoomEnabled) BOOL zoomEnabled;
- (void)dealloc;
- (id)initWithMapView:(id)arg1 gestureTargetView:(id)arg2;
- (id)initWithMapView:(id)arg1 gestureTargetView:(id)arg2 doubleTapTargetView:(id)arg3;

@end

