from selenium import webdriver

driver = webdriver.Chrome()
driver.get("https://www.goelganga.com/thank-you-ghar/covid-19/shreyas-jayphalkar/")
button = driver.findElementByClassName("js-rmp-rating-icon rmp-icon rmp-icon--ratings rmp-icon--star rmp-icon--half-highlight js-rmp-remove-half-star").click();
button.click()